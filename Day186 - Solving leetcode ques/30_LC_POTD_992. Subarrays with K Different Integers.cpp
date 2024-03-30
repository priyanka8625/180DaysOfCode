class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //the number of subarrays with exactly k different integers 
        //=> (subarrays with k unique ints) - (subarrays with k-1 unique ints)
        return countSubarraysWithKDistinct(nums, k) - countSubarraysWithKDistinct(nums,k-1);
    }
    int countSubarraysWithKDistinct(vector<int> &nums, int k){
        int left=0, right=0, count=0, n=nums.size();
        unordered_map<int, int> elements;
        while(right<n){
            elements[nums[right]]++;
            while(left<=right && elements.size()>k){
                if(--elements[nums[left]] == 0)
                    elements.erase(nums[left]);
                left++;
            }
            //once unique element count is == k, then update count of subarrays
            count += right-left+1;
            right++;
        }
        return count;
    }
};