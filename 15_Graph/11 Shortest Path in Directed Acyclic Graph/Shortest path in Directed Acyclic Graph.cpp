// User function Template for C++
class Solution {
  public:
    void dfs(int curr, vector<pair<int, int>> adjList[], stack<int>& s, vector<bool>& visited){
        visited[curr] = 1;
        
        for(int i=0; i<adjList[curr].size(); i++){
            int ele = adjList[curr][i].first;
            if(!visited[ele])
                dfs(ele, adjList, s, visited);
        }
        s.push(curr);
    }
    
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        //1. find topological sort (DFS)
        //2. remove elements from stack one by one 
        //3. update their neighbours distance to min(dist[nei], dist[currNode]+weight[node, nei]);
        vector<pair<int, int>> adjList[N];
        for(int i=0; i<M; i++){
            adjList[edges[i][0]].push_back(make_pair(edges[i][1], edges[i][2]));
        }
        
        stack<int> s;
        vector<bool> visited(N, 0);
        
        dfs(0, adjList, s, visited);
        
        vector<int> distance(N, INT_MAX);
        distance[0] = 0;
        while(!s.empty()){
            int curr = s.top();
            s.pop();
            
            //look at the neighbours and update min dist
            for(int i=0; i<adjList[curr].size(); i++){
                int nei = adjList[curr][i].first;
                int weight = adjList[curr][i].second;
                
                distance[nei] = min(distance[nei], distance[curr]+weight);
            }
        }
        //update non reachable nodes to -1
        for(int i=0; i<N; i++)
            if(distance[i] == INT_MAX)
                distance[i] = -1;
                
        return distance;
    }
};