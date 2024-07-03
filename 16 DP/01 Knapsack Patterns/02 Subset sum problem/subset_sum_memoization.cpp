//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> t(n+1, vector<int>(sum+1, -1));
        
        return getSum(arr, sum, n, t);
    }
    bool getSum(vector<int>& arr, int sum, int n, vector<vector<int>>& t){
        if(sum==0)
            return t[n][sum] = 1;
        if(n==0)
            return t[n][sum] = 0;
        
        if(t[n][sum] != -1){
            return t[n][sum];
        }
        
        if(arr[n-1]<=sum){
            return t[n][sum] = (getSum(arr, sum-arr[n-1], n-1, t) || getSum(arr, sum, n-1, t));
        }else{
           return t[n][sum] = getSum(arr, sum, n-1, t);
        }
    }
};
