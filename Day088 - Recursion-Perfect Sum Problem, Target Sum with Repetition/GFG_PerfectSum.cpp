class Solution {
    public:
    int perfectSum(int arr[], int N, int sum) {
        int mod = pow(10,9)+7;
        return subsets(arr, 0, sum, N);
    }
    int subsets(int arr[], int index, int sum, int n){
    	if(index == n)
    		return sum==0;
    		
    	return subsets(arr, index+1, sum, n)%1000000007 + subsets(arr, index+1, sum-arr[index], n)%1000000007;
    }
};
