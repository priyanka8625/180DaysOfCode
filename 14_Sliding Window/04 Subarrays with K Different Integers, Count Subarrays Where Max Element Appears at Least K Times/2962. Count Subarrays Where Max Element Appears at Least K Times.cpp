class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long total=0;
        int start=0, end=0, count=0, maxEle=0;
        for(int i : nums){
            maxEle = max(maxEle, i);
        }
        while(end < nums.size()){
            //get the count of max element
            if(maxEle == nums[end]){
                count++;
            }
            //if max element occurs atleast  times then now add the no of subarrays and decrease the 
            //window size
            while(count == k){
                total += (nums.size() - end);//becuase all the elements after end will also 
                //form a valid subarray including the subarray from start to end

                //decrease window size
                if(nums[start] == maxEle)
                    count--;
                start++;
            }
            end++;
        }
        return total;
    }
};