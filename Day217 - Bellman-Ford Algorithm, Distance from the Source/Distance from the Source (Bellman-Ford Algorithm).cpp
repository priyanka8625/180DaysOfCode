
class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dist(V, 1e8);
        dist[S] = 0;
        int e = edges.size();
        //1. Relax edges V-1 times
        for(int i=0; i<V-1; i++){
            bool flag = 0;
            for(int j=0; j<e; j++){
                int u = edges[j][0];
                int v = edges[j][1];
                int wt = edges[j][2];
                
                //don't check for distance as 1e8+anything will result into a higher distance only
                if(dist[u] == 1e8){
                    continue;
                }
                //change distance if found shorter one
                if(dist[u]+wt < dist[v]){
                    dist[v] = dist[u] + wt;
                    flag = 1;//dist changed
                }
            }
            if(!flag){
                //dist not changed after relaxation of edges, hence we found our dist ans
                return dist;
            }
        }
        //2. Relax edges one more time to detect -ve cycle
        for(int j=0; j<e; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            //don't check for distance as 1e8+anything will result into a higher distance only
            if(dist[u] == 1e8){
                continue;
            }
            if(dist[u]+wt < dist[v]){
                //if dist changes, hence cycle detected
                vector<int> ans(1, -1);
                return ans;
            }
        }
        return dist;
    }
};