class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        //DFS:
        vector<bool> path(V, 0);
        vector<bool> visited(V, 0);
        for(int i=0; i<V; i++)
            if(!visited[i])
                if(detectCycle(i, adj, path, visited)) return 1;
        
        return 0;
    }
    bool detectCycle(int curr, vector<int> adj[], vector<bool>& currpath, vector<bool>& visited){
        currpath[curr] = 1;//add node into current path vector
        visited[curr] = 1;
        
        
        //explore the adjacent paths using dfs
        for(int ele : adj[curr]){
            if(currpath[ele])
                return 1;//cycle is detectde if an element appears twize in a single path
            
            //if current adj ele is already vsited in some prev paths, then no need to visit again 
            //as it won't contain any cycles
            if(visited[ele])
                continue;
            
            //if ele is not included in currpath and it's no even visited 
            if(detectCycle(ele, adj, currpath, visited)) 
                return 1;
        }
        //backtrack in order to explore other paths as well 
        currpath[curr] = 0;
        return 0;
    }
};
