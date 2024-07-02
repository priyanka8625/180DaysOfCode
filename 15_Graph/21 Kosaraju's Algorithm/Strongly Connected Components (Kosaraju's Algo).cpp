class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        //KOSURAJU's algorithm
        //1. topological sort : using DFS becuase BFS won't wonrk
        stack<int> s;
        vector<bool> visited(V, 0);
        for(int i=0; i<V; i++){
            if(!visited[i])
                topological_sort(adj, i, visited, s);
        }
        //2. reverse edges
        vector<vector<int>> revAdj(V);
        for(int i=0; i<V; i++){
            for(int ele : adj[i]){
                int u = i, v=ele;
                revAdj[v].push_back(u);
            }
        }
        //3. apply dfs
        int components=0;
        for(int i=0; i<V; i++)
            visited[i] = 0;
            
        while(!s.empty()){
            int node = s.top();
            s.pop();
            if(!visited[node]){
                dfs(revAdj, node, visited);
                components++;
            }
        }
        return components;
    }
    void dfs(vector<vector<int>>& revAdj, int node, vector<bool>& visited){
        visited[node] = 1;
        for(int ele : revAdj[node]){
            if(!visited[ele])
                dfs(revAdj, ele, visited);
        }
    }
    void topological_sort(vector<vector<int>>& adj, int curr, vector<bool>& visited, stack<int>& s){
        visited[curr] = 1;
        for(int ele : adj[curr]){
            if(!visited[ele])
                topological_sort(adj, ele, visited, s);
        }
        s.push(curr);
    }
};