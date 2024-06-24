class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n = matrix.size();
	    //1. first convert the matrix -1 entries to INT_MAX, for easy updation
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            matrix[i][j] = (matrix[i][j]==-1)? INT_MAX:matrix[i][j];
	        }
	    }
	    //2. update the path from each node to every other node 
	    //by selecting all the nodes as intermediate one by one
	    //path(i, j) = min(path(i, j), path(i, k)+path(k, j));
	    for(int k=0; k<n; k++){
	        //update i->j as i->k->j, if needed
	        for(int i=0; i<n; i++){
	            for(int j=0; j<n; j++){
	                if(matrix[i][k]==INT_MAX || matrix[k][j]==INT_MAX){
    	                continue;//to avoid int overflow
    	            }
    	            matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);   
	            }
	        }
	    }
	    //convert the int_max paths to -1 
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            matrix[i][j] = (matrix[i][j]==INT_MAX)? -1:matrix[i][j];
	        }
	    }
	}
};