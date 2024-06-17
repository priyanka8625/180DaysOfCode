class Solution 
{
    int r, c;
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        //here we can use BFS to rot the fresh oranges in unit time
        queue<pair<int, int>> q;
        r = grid.size(), c=grid[0].size();
        //first get all the rotten oranges
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] == 2)
                    q.push(make_pair(i, j));
            }
        }
        
        //apply BFS on rotten oranges
        int time = 0;
        while(!q.empty()){
            //rot adj fresh oranges of rotten ones in unit time
            time++;
            int rotten = q.size();
            while(rotten--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for(int k=0; k<4; k++){
                    if(isValid(i+row[k], j+col[k]) && grid[i+row[k]][j+col[k]] == 1){
                        grid[i+row[k]][j+col[k]] = 2;
                        q.push(make_pair(i+row[k], j+col[k]));
                    }
                }
            }
        }
        
        //check if there are any fresh oranges left
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] == 1)
                    return -1;
            }
        }
        //time=0 means a special case when grid contains no rotten oranges and no fresh oranges
        return (time==0)? time : time-1;//cuz rotten oranges of last paas will not rot any further oranges, hence we must not count that time
    }
    bool isValid(int i, int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
};
