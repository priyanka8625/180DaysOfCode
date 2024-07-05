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
        return subsetSum(arr, sum/2, N);
    }
    
    bool subsetSum(int arr[], int sum, int n){
        if(n==0 && sum==0)
            return 1;
        if(n==0)
            return 0;
        if(sum==0)
            return 1;
        if(arr[n-1]<=sum)
            return subsetSum(arr, sum-arr[n-1], n-1) || subsetSum(arr, sum, n-1);
        else
            return subsetSum(arr, sum, n-1);
    }
};