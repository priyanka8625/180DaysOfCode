class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxLen=0;
        unordered_map<int, int> freq;
        int start=0, end=0;
        while(end < nums.size()){
            //add the freq of end'th element
            freq[nums[end]]++;
            //once the element freq goes beyond k then decrease window size
            while(start<=end && freq[nums[end]] > k){
                freq[nums[start]]--;
                start++;
            }

            maxLen = max(maxLen, end-start+1);
            end++;//move to next element
        }
        return maxLen;
    }
};