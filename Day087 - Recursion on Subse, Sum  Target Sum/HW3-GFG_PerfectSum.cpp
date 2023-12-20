//perfect sum -> throws TLE from testcase 1010/1130

class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
	    int mod = (pow(10,9)+7);
        return find(arr, 0, n, sum, mod);
	}
	int find(int arr[], int index, int n, int sum, int m){
	    if(sum == 0){
	        if(index<n && arr[index]==0)//for testcase no. 112 -> n=2 sum=1 arr=[1,0]
	            return 2;
	        return 1;
	    }
	    if(index == n || sum<0)
	        return 0;
	    
	    return find(arr, index+1, n, sum, m)%m + find(arr, index+1, n, sum-arr[index], m)%m;
	}
};

