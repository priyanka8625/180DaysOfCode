
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
        //let's apply dfs
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
        //apply dfs to find 2 from 1
        return dfs(grid, src_i, src_j);
    }
    bool dfs(vector<vector<int>>& grid, int i, int j){
        if(grid[i][j]==2){
            //reached target
            return true;
        }
        //amrk current cells as visited - 0
        grid[i][j] = 0;
        
        //explore unvisited valid paths from current cell
        for(int k=0; k<4; k++){
            int new_i=i+row[k], new_j=j+col[k];
            if(isValid(new_i, new_j) && grid[new_i][new_j]){
                //explore this path
                if(dfs(grid, new_i, new_j))
                    return true;
            }
            
        }
        //if you didn't find any target 
        return false;
    }
    bool isValid(int i, int j){
        return i>=0 && i<n && j>=0 && j<n;
    }
};
