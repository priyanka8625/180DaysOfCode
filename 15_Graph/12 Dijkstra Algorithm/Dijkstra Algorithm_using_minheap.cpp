class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<bool> explored(V, 0);
        vector<int> dist(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dist[S] =0;
        pq.push(make_pair(dist[S], S));
        
        
        while(!pq.empty()){
            //select a node which is unexplored and has minimum value among all distance values
            //which is present in pq
            int node = pq.top().second;
            pq.pop();
            
            //explore the edges of selected node
            explored[node] = 1;
            for(int j=0; j<adj[node].size(); j++){
                int neighbour = adj[node][j][0];
                int weight = adj[node][j][1];
                if(!explored[neighbour] && dist[node]+weight < dist[neighbour]){
                    dist[neighbour] = dist[node] + weight;
                    pq.push({dist[neighbour], neighbour});
                }
            }   
        }
        return dist;
    }
};