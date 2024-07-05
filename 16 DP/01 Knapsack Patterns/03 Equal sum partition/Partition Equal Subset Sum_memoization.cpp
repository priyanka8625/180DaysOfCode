class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0; i<N; i++){
            sum+= arr[i];
        }
        //if sum is odd then we can't partitio the arr into two parts with equal sum
        if(sum%2!=0)
            return 0;
        //else we'll just check if we can get a subset with half the total sum of arr
        //if yes it means we can also get the other subset with remaining half sum
        //using memoization
        vector<vector<int>> t(N+1, vector<int>((sum/2)+1, -1));
        return subsetSum(arr, sum/2, N, t);
    }
    
    bool subsetSum(int arr[], int sum, int n,  vector<vector<int>> &t){
        if(n==0 && sum==0)
            return t[n][sum]=1;
        if(n==0)
            return t[n][sum]=0;
        if(sum==0)
            return t[n][sum]=1;
        
        if(t[n][sum] != -1)
            return t[n][sum];
            
        if(arr[n-1]<=sum)
            return t[n][sum] = subsetSum(arr, sum-arr[n-1], n-1, t) || subsetSum(arr, sum, n-1, t);
        else
            return t[n][sum]=subsetSum(arr, sum, n-1, t);
    }
};