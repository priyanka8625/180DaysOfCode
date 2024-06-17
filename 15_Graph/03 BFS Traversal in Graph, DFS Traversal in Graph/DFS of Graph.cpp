class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> visited(V, 0);
        dfs(0, adj, visited, ans);
        return ans;
    }
    void dfs(int curr, vector<int> adj[], vector<bool>& visited, vector<int>& ans){
        //visit current node
        visited[curr] = 1;
        ans.push_back(curr);
        
        //explore adjacent uvisited nodes to traverse the depths
        for(int adjNode : adj[curr]){
            if(!visited[adjNode]){
                dfs(adjNode, adj, visited, ans);
            }
        }
    }
};