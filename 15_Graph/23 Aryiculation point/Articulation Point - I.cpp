
class Solution {
  public:
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<bool> artpoint(V, 0);
        vector<int> disc(V);
        vector<int> low(V);
        vector<bool> visited(V, 0);
        int timer = 0;
        dfs(0, -1, adj, visited, disc, low, artpoint, timer);
        vector<int> ans;
        for(int i=0; i<V; i++){
            if(artpoint[i])
                ans.push_back(i);
        }
        if(ans.size()==0)
            ans.push_back(-1);
        return ans;
    }
    void dfs(int node, int parent, vector<int> adj[], vector<bool>& visited, vector<int>& disc, vector<int>& low, vector<bool>& artpoint, int timer){
        visited[node] = 1;
        disc[node] = low[node] = timer;
        int child=0;
        for(int neigh : adj[node]){
            if(neigh == parent)
                continue;
                
            if(visited[neigh]){
                low[node] = min(low[node], disc[neigh]);
            }else{
                child++;//for identifying start point as artpoint 
                timer++;
                dfs(neigh, node, adj, visited, disc, low, artpoint, timer);
                if(disc[node]<=low[neigh] && parent!=-1){
                    artpoint[node] = 1;
                }
                low[node] = min(low[node], low[neigh]);
            }
        }
        if(child>1 && parent==-1){
            artpoint[node] = 1;
        }
    }
};