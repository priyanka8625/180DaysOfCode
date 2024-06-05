class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        //uing dijkstra
        vector<pair<int, int>> adj[n+1];
        //1. create adjList
        for(int i=0; i<m; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            adj[u].push_back({v, weight});
            adj[v].push_back({u, weight});
        }
        
        //apply dijkstra
        vector<int> parent(n+1, -1);
        vector<int> dist(n+1, INT_MAX);
        vector<bool> explored(n+1, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        //1. find distance of source and push it in queue
        dist[1] = 0;
        parent[1] = -1;//as it's the src node
        pq.push({0, 1});
        
        //2. now take out minimum distance node present in pq and update it's neighbour node dist
        while(!pq.empty()){
            //a. get the node having min distance among all the nodes visited so far
            int node = pq.top().second;
            pq.pop();
            
            if(explored[node])
                continue;
            
            explored[node] = 1;
            
            //b. explore it's edges and update it's neighbour's distances
            for(int j=0; j<adj[node].size(); j++){
                int neighbour = adj[node][j].first;
                int weight = adj[node][j].second;
                if(!explored[neighbour] && dist[node]+weight < dist[neighbour]){
                    dist[neighbour] = dist[node]+weight;
                    parent[neighbour] = node;
                    pq.push({dist[neighbour], neighbour});
                }
            }
        }
        
        //find the path from dest i.e. n to 1 using parent array
        vector<int> path;
        // if path doesn't exist
        if(parent[n] == -1)
            return {-1};
            
        int i = n;
        while(i != -1){
            path.push_back(i);
            i = parent[i];
        }
        path.push_back(dist[n]);
        reverse(path.begin(), path.end());
        return path;
    }
};