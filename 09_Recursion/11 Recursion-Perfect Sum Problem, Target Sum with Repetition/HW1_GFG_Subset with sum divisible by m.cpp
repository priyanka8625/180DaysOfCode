class Solution{
	public:

		int DivisibleByM(vector<int>nums, int m){
		    return findSubset(nums, 0, nums.size(), 0, m);
		}
		
		int findSubset(vector<int> &nums, int index, int n, int sum, int m){
		    if(index == n){
		        //we've got the sum of our subset
		        //exclude the empty set sum i.e. sum=0 cuz it will always return 1 for % operation
		        if(sum==0)
		            return 0;
		        return sum%m == 0;//return 1 or 0
		    }
		    
		    //no and yes for current index, either of them can return 1 so return OR of them
		    return findSubset(nums, index+1, n, sum, m) || findSubset(nums, index+1, n, sum + nums[index], m);
		}
};
