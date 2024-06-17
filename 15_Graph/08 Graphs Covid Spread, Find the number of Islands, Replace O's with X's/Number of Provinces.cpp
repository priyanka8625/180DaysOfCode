class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        //convert this matrix into list
        vector<vector<int>> adjList(V);
        for(int i=0; i<V; i++){
            for(int j=0;j<V; j++){
                if(i!=j && adj[i][j] == 1)
                adjList[i].push_back(j);
            }
        }
        
        //apply bfs
        int count=0;
        vector<bool> vis(V, 0);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                count++;
                dfs(i, adjList, vis);
            }
        }
        return count;
    }
    void dfs(int curr, vector<vector<int>> &adjList, vector<bool>& vis){
        vis[curr] = 1;
        for(int ele : adjList[curr]){
            if(!vis[ele])
            dfs(ele, adjList, vis);
        }
    }
};
