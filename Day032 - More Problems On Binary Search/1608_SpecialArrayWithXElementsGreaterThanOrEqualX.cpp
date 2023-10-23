class Solution {
public:
    int binarySearch(vector<int>& nums, int& target, int& n){
        int start=0, end = n-1, mid=0;
        // find the most left occurance of the element in nums which = target or <target
        while(start<end){
            mid = start + (end-start)/2;
            if(nums[mid]>=target)
                end = mid;
            else
                start = mid+1;
        }
        return start;
    }
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size(), start=0, end=nums[n-1], mid=0;
        for(int i=0; i<=nums[n-1];i++){
            int res = binarySearch(nums, i, n);
            if(n - res == i)
                return i;
        }
        return -1;
    }
};
