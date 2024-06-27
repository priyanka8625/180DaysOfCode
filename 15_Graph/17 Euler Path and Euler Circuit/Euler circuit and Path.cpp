
class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
	    //EULER - CIRCUIT
	    //1. find degree of each node
	    //2. all nodes must have even degrees
	    //3. all non-zero degree nodes must be connected in a single component
	    
	    
	    //EULER - PATH
	    //1. find degree of each node
	    //2. exactly 0 or two nodes can have ODD degrees except which all nodes must be even
	    //3. all non-zero degree nodes must be connected in a single component
	    
	    vector<int> deg(V, 0);
	    int odd_deg=0;
	    for(int i=0; i<V; i++){
	        deg[i] = adj[i].size();
	        if(deg[i]&1)
	            odd_deg++;
	    }
	    //odd_deg== 1,3,4,5,...
	    if(odd_deg!=2 && odd_deg!=0)//not an EP and hence not EC
	        return 0;
	    
	    vector<bool> visited(V, 0);
	    for(int i=0; i<V; i++){
	        if(deg[i]!=0) {  //apply traversal from non-zero degree node
	            dfs(adj, i, visited);
	            break;
	        }
	    }
	    
	    //if nonzero degree node is still not visited, return 0;
	    for(int i=0; i<V; i++){
	        if(!visited[i] && deg[i])
	            return 0;
	            
	    }
	    
	    //eulerian circuit
	    if(odd_deg==0)
	        return 2;
	    else//eulerian path
	        return 1;
	}
	
	void dfs(vector<int>adj[], int start, vector<bool> &visited){
	    visited[start] = 1;
	    
	    for(int i : adj[start]){
	        if(!visited[i])
	            dfs(adj, i, visited);
	    }
	}
};