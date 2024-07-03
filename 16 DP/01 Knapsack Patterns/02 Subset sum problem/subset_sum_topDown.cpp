
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<bool>> t(n+1, vector<bool>(sum+1, 0));
        
        //base condn in memoization == initialization in top down
        for(int i=0; i<=n; i++){
            for(int j=0; j<=sum; j++){
                if(i==0)
                    t[i][j] = 0;
                if(j==0)
                    t[i][j] = 1;
            }
        }
        
        //cmpute values
        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                if(arr[i-1]<=j){
                    t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }
};