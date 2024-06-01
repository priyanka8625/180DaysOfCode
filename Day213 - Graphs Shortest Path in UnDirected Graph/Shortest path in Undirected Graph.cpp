class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int> distance(N, -1);
        vector<int> visited(N, 0);
        vector<int> adjList[N];
        //create adjList of undirected graph
        for(int i=0; i<M; i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        //now let's apply simple bfs to get the shortet path from source to all nodes
        queue<int> q;
        q.push(src);
        distance[src] = 0;
        visited[src] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            //shortest distance of neighbour will be currNode + 1
            for(int ele : adjList[node]){
                if(!visited[ele]){
                    q.push(ele);
                    visited[ele] = 1;
                    distance[ele] = distance[node] + 1;
                }
            }
        }
        return distance;
    }
};