class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> freq;
        int maxFreq=INT_MIN;
        //first count frequencies of all the elements
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            maxFreq = max(maxFreq, freq[nums[i]]);
        }
        //now add elemnets having freq = maxFreq
        int sum=0;
        for(auto& [key, value] : freq){
            if(value == maxFreq)
                sum += value;
        }
        return sum;
    }
};