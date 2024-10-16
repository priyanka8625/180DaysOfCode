class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
        if(n==0 || W==0)
            return 0;
        
        if(wt[n-1]<=W){
            //include this and not include this
            return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
                                  knapSack(W, wt, val, n-1));
        }else{
            return knapSack(W, wt, val, n-1);
        }
    }
};