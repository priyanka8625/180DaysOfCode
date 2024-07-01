class Solution
{
	public:
	//using disjoint set by size
	int findParent(int u, vector<int>& parent){
	    if(parent[u] == u)
	        return u;
	    
	    //path compression
	    parent[u] = findParent(parent[u], parent);
	    return parent[u];
	}
	void unionBySize(int u, int v, vector<int>& parent, vector<int>& size){
	    int pu = findParent(u, parent);
	    int pv = findParent(v, parent);
        if(size[pu] > size[pv]){
            //merge v's set in u's set
            parent[pv] = pu; 
            size[pu] += size[pv];
        }else if(size[pv]>size[pu]){
            parent[pu] = pv;
            size[pv] += size[pu];
        }else{
            parent[pv] = pu;
            size[pu]+= size[pv];
        }
	}
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> parent(V);//in case if probem requires to return the spanning tree itself
        vector<int> size(V, 1);//size -no. of nodes in a set
        //initially node's parent is itself they are in teir own set
        for(int i=0; i<V; i++){
            parent[i] = i;
        }
        
        //apply kruskal's algorithm - select smallest edges and join them by avoiding loops
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;//to store {wt, node, parent}
        for(int i=0; i<V; i++){
            for(int j=0; j<adj[i].size(); j++)
                pq.push({adj[i][j][1], {i, adj[i][j][0] }});
        }
        
        int cost = 0, edges=0;//tree has V-1 edges so keep trak of it
        while(!pq.empty()){
            int wt = pq.top().first;
            int u = pq.top().second.first;
            int v = pq.top().second.second;
            pq.pop();
            
            //join the two u and v in one set if their parents are not same 
            //i.e. they belong to diff sets
            if(findParent(u, parent) != findParent(v, parent)){
                cost += wt;
                unionBySize(u, v, parent, size);
                edges++;
                if(edges==V-1){
                    break;
                }
            }
        }
        return cost;
    }
};