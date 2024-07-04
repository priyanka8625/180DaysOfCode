class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connection) {
        vector<int> adj[n];
        for(int i=0; i<connection.size(); i++){
            adj[connection[i][0]].push_back(connection[i][1]);
            adj[connection[i][1]].push_back(connection[i][0]);
        }
        vector<vector<int>> bridge;
        vector<int> disc(n);
        vector<int> low(n);
        vector<bool> visited(n, 0);
        int count=0;
        dfs(adj, 0, -1, visited, disc, low, bridge, count);
        return bridge;
    }
    void dfs(vector<int> adj[], int node, int parent, vector<bool>& visited, vector<int>& disc, vector<int>& low, vector<vector<int>>& bridge, int count){
        disc[node] = low[node] = count;
        visited[node] = 1;

        for(int neigh : adj[node]){
            if(neigh == parent){//if neigh == node's parent means this is the same edge where we came from
                continue;
            }
            if(visited[neigh]){//cycle detected
                low[node] = min(low[node], low[neigh]);
            }else{
                count++;
                dfs(adj, neigh, node, visited, disc, low, bridge, count);
                //after traversal
                low[node] = min(low[node], low[neigh]);
                if(disc[node]<low[neigh]){
                    bridge.push_back({node, neigh});
                }
            }
        }
    }
};