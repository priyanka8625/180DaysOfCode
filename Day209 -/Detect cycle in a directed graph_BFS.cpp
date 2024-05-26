class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        //BFS: Kahn's algo i.e. topological sort
        vector<int> indeg(V, 0);
        vector<int> ans;
        for(int i=0; i<V; i++){
            for(int ele : adj[i]){
                indeg[ele]++;
            }
        }
        queue<int> q;
        for(int i=0; i<V; i++){
            if(indeg[i]==0)
                q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            //decrement node's adj ele's indeg by 1
            for(int ele : adj[node]){
                if(--indeg[ele] == 0)
                    q.push(ele);
            }
        }
        
        //now check if your topological sort answer's size is equal to the no of vertices i.e. V
        //because topological sort only works for DAG and not for DCG i.e. cyclic graph
        
        if(ans.size() != V)//means not all vertices are visited hence it contains cycle
            return 1;
        return 0;//doesn't contain cycle
    }
};