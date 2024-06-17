class Solution {
  public:
    bool bfs(vector<int> adj[], vector<bool>& visited, int start){
        queue<pair<int, int>> q;
        //apply bfs
        q.push(make_pair(start, -1));
        visited[start] = 1;
        while(!q.empty()){
            pair<int, int> node = q.front();
            q.pop();
            
            int curr = node.first;
            int prev = node.second;
            
            //visit all the adjacent nodes which are not equal to the one from where we arrived
            
            for(int ele : adj[curr]){
                if(prev == ele)
                    continue;
                if(visited[ele]){
                    //if already visited neighbour hence cycle detected
                    return 1;
                }
                //visit the unvisite node to explore it's path further
                q.push(make_pair(ele, curr));
                visited[ele] = 1;
            }
        }
        return 0;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, 0);
        for(int i=0; i<V; i++){
            if(visited[i] == 0 && bfs(adj, visited, i)){
                return 1;
            }
        }
        return 0;
        //dfs is more easy than bfs approach
        //we're visiting only those which are not equal to it's prev node 
        //and if we get any already visited node while doing this 
        //then there is a cycle in the graph
    }
    
};