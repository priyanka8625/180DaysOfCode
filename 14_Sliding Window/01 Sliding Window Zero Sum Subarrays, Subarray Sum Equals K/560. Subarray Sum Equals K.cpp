class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //here we will use sliding window to calclate the prefixSum and 
        //check if the any subarray has a sum == k 
        //we can do this by subtracting the value k from prefix sum and 
        //finding if the subtraction is already calculated as a prefix sum in prev iterations
        //to store these prefix sums of each index we use a map, which stores a count of sums as well
        //which helps to identify the correct no. of subarrays giving sum == k
        //for better understanding dry run..

        unordered_map<int, int> mp; //to store prefixSum and it's no of ocuurance
        int prefixSum=0, total=0;
        mp[0]=1;//it may happen that at some index in array we get prefixSum == k, and the subtraction in such case would be 0, identify the count of 0's we initialize map with a 0 at first

        for(int i=0; i<nums.size(); i++){
            prefixSum += nums[i];
            if(mp[prefixSum-k]){
                // if we get a previous prefix sum value after subtracting k from current sum 
                // it means that there exists some no. of subarrays whose sum == k 
                // that's why because currSum-prevSum = k 
                total += mp[prefixSum-k];
            }
            //increase the occurance of current prefix sum
            mp[prefixSum]++;
        }
        return total;
    }
};