class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start=0, end=n-1, mid=0;

        // for edge cases, if n=1 and other cases, as mid-1 and mid+1 throw errors at this case 0th & n-1th index
        if(n==1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;

        start = 1;
        end = n-2;
        // for normal cases if peak is present between 0 to n-1
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]<nums[mid-1])
                end = mid-1;
            else if(nums[mid]>nums[mid-1])
                start = mid+1;
        }
        return -1;
    }
};
