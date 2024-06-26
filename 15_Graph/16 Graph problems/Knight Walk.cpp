class Solution {
public:
    int row[8] = {2, 2, -2, -2, 1, -1, 1, -1};
    int col[8] = {1, -1, 1, -1, 2, 2, -2, -2};
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here
	    //create an adjacency matrix of size N*N to apply bfs
	    vector<vector<int>> adj(N, vector<int>(N, 0));
	    queue<pair<int, int>> q;
	    q.push({KnightPos[0]-1, KnightPos[1]-1});
	    adj[KnightPos[0]-1][KnightPos[1]-1] = 1;
	    int steps=0;
	    
	    
	    while(!q.empty()){
	        //get the current level nodes
	        int count = q.size();
	        //now explore their adjcanets
	        while(count--){
	            int i = q.front().first;
	            int j = q.front().second;
	            q.pop();
	            
	            //if you've reached the target 
	            if(i==TargetPos[0]-1 && j==TargetPos[1]-1)
	                return steps;
	                
	            //explore all the possible moves from current pos
	            for(int k=0; k<8; k++){
	                int new_i = i+row[k], new_j = j+col[k];
	                if(isValid(new_i, new_j, N) && adj[new_i][new_j]==0){
	                    adj[new_i][new_j] = 1;//mark visited
	                    q.push({new_i, new_j});
	                }
	            }
	        }
	        //increase steps after exploring all the current level cells
	        steps++;
	    }
	    return -1;
	}
	bool isValid(int i, int j, int n){
	    return i>=0 && i<n && j>=0 && j<n;
	}
};