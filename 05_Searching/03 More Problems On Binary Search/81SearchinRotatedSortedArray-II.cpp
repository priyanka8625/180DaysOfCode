class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int n=nums.size(), start=0, end=n-1, mid=0;
         
         while(start<=end){
             mid = start + (end-start)/2;
             if(nums[mid]==target)
                return true;

            // ifthere're duplicate elements present in array, just update start and end
            if(nums[start]==nums[mid] && nums[end]==nums[mid]){
                start++;
                end--;
            }
            //target present in first half
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=target && target<nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            //target present in the second half
            else{
                if(nums[mid]<target && target<=nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
         }
         return false;
    }
};
