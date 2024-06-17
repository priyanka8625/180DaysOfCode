class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V, -1);
	    queue<int> q;
	    //use 2-coloing algo and BFS, assign two neighbours oppo color as 0 and 1
	    for(int i=0; i<V; i++){
	        //if vertex is not visited then only traverse it
	        if(color[i]==-1){
    	        q.push(i);
        	    color[i] = 0;
        	    while(!q.empty()){
        	        int node = q.front();
        	        q.pop();
        	        
        	        //analyze it's neighbour nodes
        	        for(int ele : adj[node]){
        	            //if not yet divided in any of the 2 sets
        	            if(color[ele]==-1){
        	                color[ele] = !color[node];
        	                q.push(ele);
        	            }else{
        	                //if already assigned to any set
        	                //then check if it's in the oppo set or not
        	                if(color[ele] == color[node])
        	                    return false;
        	            }
        	        }
        	    }
	        }
	    }
	    
    	return true;
	}

};