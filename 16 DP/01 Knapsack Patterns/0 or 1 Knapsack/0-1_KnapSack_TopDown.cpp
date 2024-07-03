
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       //convert the memoization code as it is into top - down code
       vector<vector<int>> t(n+1, vector<int>(W+1));
       //intialize base condn row and column with it's return value i.e. 0
       for(int i=0; i<=n; i++){
           for(int j=0; j<=W; j++){
               if(i==0 || j==0)
                    t[i][j] = 0;
           }
       }
       
       for(int i=1; i<=n; i++){
           for(int j=1; j<=W; j++){
               if(wt[i-1]<=j){
                   t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
               }
               else{
                   t[i][j] = t[i-1][j];
               }
           }
       }
       return t[n][W];
    }
};