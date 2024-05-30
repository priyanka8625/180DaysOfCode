class Solution{
public:
    int row[4] = {-1 , 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        //an o will be replaced if and only if  a set of O's are all surrounded by X
        //just like an island where land will be O and water is X
        //if we analyze this then, all the O's those are present on the boundary will never
        //be converted to X and these boundary O's - if they're a part of any set 
        //then that set will also be not converted to x 
        //except the boundary O set, all the O's can become X
        
        //let's apply BFS to do this, can also solve using dfs
        //convert all boundary O's  and their sets by X
        queue<pair<int, int>> q;
        //first row
        for(int j=0; j<m; j++){
            if(mat[0][j]=='O'){
                q.push(make_pair(0, j));
                mat[0][j] = 'B';
            }
        }
        //first col
        for(int j=0; j<n; j++){
            if(mat[j][0]=='O'){
                q.push(make_pair(j, 0));
                mat[j][0] = 'B';
            }
        }
        //last row 
        for(int j=0; j<m; j++){
            if(mat[n-1][j]=='O'){
                q.push(make_pair(n-1, j));
                mat[n-1][j] = 'B';
            }
        }
        //last col
        for(int j=0; j<n; j++){
            if(mat[j][m-1]=='O'){
                q.push(make_pair(j, m-1));
                mat[j][m-1] = 'B';
            }
        }
        
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            //explore it's set
            for(int k=0; k<4; k++){
                if(isValid(i+row[k], j+col[k], n, m) && mat[i+row[k]][j+col[k]]=='O'){
                    mat[i+row[k]][j+col[k]]='B';
                    q.push(make_pair(i+row[k], j+col[k]));
                }
            }
        }
        
        //now make all O's->X and all B's->O in mat
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 'O')
                    mat[i][j] = 'X';
                else if(mat[i][j] == 'B')
                    mat[i][j] = 'O';
            }
        }
        
        return mat;
    }
    bool isValid(int i, int j, int n, int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
};