class Solution
{
    public:
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    int n;
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        //let's apply bfs
        n=grid.size();
        int src_i=0, src_j=0;
        //find source
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    src_i = i;
                    src_j = j;
                }
            }
        }
        //apply bfs to find 2 from 1
        queue<pair<int, int>> q;
        q.push({src_i, src_j});
        grid[src_i][src_j] = 0;
        
        while(!q.empty()){
            //get current cell
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            
            //explore valid unvisited paths
            for(int k=0; k<4; k++){
                int new_i=i+row[k], new_j=j+col[k];
                if(isValid(new_i, new_j)){
                    if(grid[new_i][new_j] == 2){
                        return true;
                    }else if(grid[new_i][new_j] == 3){
                        //consider this path for exploring
                        grid[new_i][new_j] = 0;
                        q.push({new_i, new_j});
                    }
                }
            }
        }
        
        return 0;
    }
    
    bool isValid(int i, int j){
        return i>=0 && i<n && j>=0 && j<n;
    }
};