
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V, -1);
	    //for disconnected graphs
	    for(int i=0; i<V; i++){
	        //apply dfs
	        if(color[i] == -1){
	            color[i]=0;
	            if(dfs(i, adj, color)==0) return 0;
	        }
	    }
    	return true;
	}
    bool dfs(int curr, vector<int> adj[], vector<int>& color){
        for(int ele : adj[curr]){
            //if not assigned to any set
            if(color[ele]==-1){
                color[ele] = !color[curr];
                if(dfs(ele, adj, color)==0) return 0;
            }else{
                //if already assigned to some set
                if(color[ele] == color[curr]) return 0;
            }
        }
        return 1;
    }
};