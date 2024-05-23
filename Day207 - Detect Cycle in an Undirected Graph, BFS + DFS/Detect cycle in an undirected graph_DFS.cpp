class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, 0);
        for(int i=0; i<V; i++){
            if(visited[i] == 0){
                if(dfs(adj, visited, i, -1))
                    return 1; 
            }   
        }
        return 0;
        
        //we're visiting only those which are not equal to it's prev node 
        //and if we get any already visited node while doing this 
        //then there is a cycle in the graph
    }
    bool dfs(vector<int> adj[], vector<bool>& visited, int curr, int prev){
        //if the node is not visited then
        //visit current node
        visited[curr] = 1;
        
        //explore all the adjacent paths of curr such that
        //next node is not prev node to avoid going to the same prev path again
        for(int ele : adj[curr]){
            //if not prev and it's already visited
            if(ele != prev && visited[ele])
                return 1;
            
            //if not visited 
            if(ele != prev && !visited[ele]){
                //explore dfs
                int ans = dfs(adj, visited, ele, curr);
                if (ans == 1)
                    return 1;
            }
        }
        //no cycle detected 
        return 0;
    }
};