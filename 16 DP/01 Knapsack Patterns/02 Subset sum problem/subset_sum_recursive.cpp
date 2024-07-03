//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        return getSum(arr, sum, arr.size());
    }
    bool getSum(vector<int>& arr, int sum, int n){
        if(n==0 && sum ==0)
            return 1;
        if(sum==0)
            return 1;
        if(n==0)
            return 0;
        
        if(arr[n-1]<=sum){
            return (getSum(arr, sum-arr[n-1], n-1) || getSum(arr, sum, n-1));
        }else{
            return getSum(arr, sum, n-1);
        }
    }
};
