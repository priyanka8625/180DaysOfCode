
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;//to store {wt, node, parent}
        vector<int> parent(V);//in case if probem requires to return the spanning tree itself
        vector<bool> isMST(V, 0);
        int cost = 0;
        pq.push({0, {0, -1}});
        while(!pq.empty()){
            int wt = pq.top().first;
            int node = pq.top().second.first;
            int par = pq.top().second.second;
            pq.pop();
            
            //if current node is not part of MST already
            if(!isMST[node]){
                cost += wt;
                isMST[node] = 1;
                parent[node] = par;
                
                //consider the neighbour edges where node is the u and insert in pq
                for(vector<int> edges: adj[node]){
                    //if v is no already here in MST i.e. from u->v then
                    if(!isMST[edges[0]]){
                        pq.push({edges[1], {edges[0], node}});
                    }
                }
            }
        }
        
        return cost;
    }
};
