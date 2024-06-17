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
        dist[S] =0;
        int count=V;
        while(count--){
            //select a node which is unexplored and has minimum value among all distance values
            int node = -1, value=INT_MAX;
            for(int i=0; i<V; i++){
                if(!explored[i] && dist[i]<value){
                    value = dist[i];
                    node = i;
                }
            }
            
            //explore the edges of selected node
            explored[node] = 1;
            for(int j=0; j<adj[node].size(); j++){
                int neighbour = adj[node][j][0];
                int weight = adj[node][j][1];
                if(!explored[neighbour] && dist[node]+weight < dist[neighbour]){
                    dist[neighbour] = dist[node] + weight;
                }
            }   
        }
        return dist;
    }
};