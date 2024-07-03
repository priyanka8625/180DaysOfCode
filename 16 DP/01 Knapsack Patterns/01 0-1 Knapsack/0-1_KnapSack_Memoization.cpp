class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> t(n+1, vector<int>(W+1, -1));
       return knapSackUtil(W, wt, val, n, t);
    }
    int knapSackUtil(int W, int wt[], int val[], int n, vector<vector<int>>& t){
        //memoization
        if(n==0 || W==0)
            return 0;
            
        if(t[n][W] != -1)
            return t[n][W];
            
        if(wt[n-1]<=W){
            //include this and not include this
            return t[n][W] = max(val[n-1] + knapSackUtil(W-wt[n-1], wt, val, n-1, t), 
                                  knapSackUtil(W, wt, val, n-1, t));
        }else{
            return t[n][W] = knapSackUtil(W, wt, val, n-1, t);
        }
    }
};