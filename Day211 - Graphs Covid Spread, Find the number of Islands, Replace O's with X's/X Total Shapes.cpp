class Solution
{
    int r, c;
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    public:
    //Function to find the number of 'X' total shapes.
     bool   isvalid(int i,int j,int n, int m, vector<vector<char>>& grid){
      if(i>=0&&i<n&&j>=0&&j<m&&grid[i][j]=='X')
      return true;
      
      return false;
        
    }
    void dfs(int i,int j,int n, int m,vector<vector<char>>& grid){
        grid[i][j]='O';
        
        int x1=i;
        int y1=j;
        
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        for(int i=0;i<4;i++){
            int x=x1+dx[i];
            int y=y1+dy[i];
            if(isvalid(x,y,n,m,grid))
            dfs(x,y,n,m,grid);
        }
    }
    int xShape(vector<vector<char>>& grid) 
    {
        int cnt=0;
        
       int n=grid.size();
       int m=grid[0].size();
       
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]=='X'){
               cnt++;
               dfs(i,j,n,m,grid);
               
               }
           }
       }
       return cnt;
    }
};

