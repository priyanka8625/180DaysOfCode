class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0, end=0, n=nums.size(), minLength=INT_MAX, sum=0;
        while(end<n){
            sum += nums[end];
            //decrease window size when sum>=target
            while(start<=end && sum>=target){
                minLength = min(minLength, end-start+1);
                //decrease window size
                sum -= nums[start];
                start++;
            }
            //increase window
            end++;
        }
        if(minLength == INT_MAX)
            return 0;
        return minLength;
    }
};