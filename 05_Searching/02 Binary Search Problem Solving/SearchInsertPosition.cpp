class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), index = n;//make index = n initially so that when target is greater than all the elements, hence in that case index will never be updated in the loop for > condn hence we'll return n in that case 
        int start=0, end= n-1, mid=0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                index = mid;
                return index;
            }else if (nums[mid]<target){
                start = mid + 1;
            }else{
                end = mid - 1;
                index = mid;//becuz WKT, the target can be inserted at the pos where 
                //there is an element which is greater than the target as we can't insert it at the smaller value than target
            }
        }
        return index;
    }
};
