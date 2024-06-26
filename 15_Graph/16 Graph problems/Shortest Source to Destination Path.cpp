class Solution {
  public:
    int row[4] = {0, 0, -1, 1};
    int col[4] = {-1, 1, 0, 0};
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        // BFS
        if(A[0][0] == 0) return -1;
        
        
        queue<pair<int, int>> q;//tostore row, col
        q.push({0, 0});//intially q will contain the first cell
        A[0][0] = 0;//mark visited
        int steps=0;//bfs visits valid nodes level wise, hence a count var will store the steps
        
        while(!q.empty()){
            int count = q.size();//get current level nodes
            while(count--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                //check if the current cell is the dest cell
                if(i==X && j==Y){
                    return steps;
                }
                
                //explore the adjacent paths
                for(int k=0; k<4; k++){
                    if(isValid(i+row[k], j+col[k], N, M) && A[i+row[k]][j+col[k]]){
                        q.push({i+row[k], j+col[k]});
                        //mark the next adj cell as visited
                        A[i+row[k]][j+col[k]] = 0;
                    }
                }
            }
            steps++;//increase steps when current level nodes are all traversed
        }
        return -1;
    }
    bool isValid(int i, int j, int n, int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
};