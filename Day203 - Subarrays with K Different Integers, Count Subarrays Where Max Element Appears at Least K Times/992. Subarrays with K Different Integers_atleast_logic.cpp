// METHOD2:

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // subarrays with k different integers can be calculated with a simple formula:
        // exactly(k) subarrays = atleast(k) - atleast(k+1) subarrays
        // or exactly(k) subarrays = atmost(k) - atmost(k-1) subarrays

        //using atleast logic
        unordered_map<int, int> freq;
        int start=0, end=0, countDiff=0, total=0;
        while(end<nums.size()){
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                countDiff++;
            
            //decrase the window size once you get atleast k diff elements
            while(countDiff == k){
                total += nums.size() - end;//all possible subarrays from start to nums.size
                freq[nums[start]]--;
                //if any element gets disappeared from window
                if(freq[nums[start]] == 0)
                    countDiff--;
                start++;
            }
            //increase window size if atleast k elements are not found
            end++;
        }

        //calculate for atleast k+1 diff ints
        start=0, end=0, countDiff=0;
        freq.clear();
        k++;
        while(end<nums.size()){
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                countDiff++;
            
            //decrase the window size once you get atleast k diff elements
            while(countDiff == k){
                total -= nums.size() - end;//all possible subarrays from start to nums.size
                freq[nums[start]]--;
                //if any element gets disappeared from window
                if(freq[nums[start]] == 0)
                    countDiff--;
                start++;
            }
            //increase window size if atleast k elements are not found
            end++;
        }

        return total;
    }
};