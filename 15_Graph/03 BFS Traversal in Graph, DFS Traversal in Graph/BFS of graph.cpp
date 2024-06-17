class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> bfs;
        vector<bool> visited(V, 0);
        queue<int> q;
        
        //visit starting node
        q.push(0);
        visited[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            //visit adjacent unvisited nodes
            for(int adjNode : adj[node]){
                if(!visited[adjNode]){
                    q.push(adjNode);
                    visited[adjNode] = 1;
                }
            }
        }
        return bfs;
    }
};