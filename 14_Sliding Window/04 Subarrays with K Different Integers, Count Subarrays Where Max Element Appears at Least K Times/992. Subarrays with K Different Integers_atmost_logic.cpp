//METHOD-1:
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // subarrays with k different integers can be calculated with a simple formula:
        // exactly(k) subarrays = atleast(k) - atleast(k+1) subarrays
        // or exactly(k) subarrays = atmost(k) - atmost(k-1) subarrays

        //code for atmost k - atmostk-1 logic
        unordered_map<int, int> freq;
        int start=0, end=0, countDiff=0, total=0;
        while(end<nums.size()){
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                countDiff++;
            
            //decrase the window size once you get atmost k diff elements
            while(countDiff > k){
                freq[nums[start]]--;
                //if any element gets disappeared from window
                if(freq[nums[start]] == 0)
                    countDiff--;
                start++;
            }
            //get the total 
            total += end-start+1;
            //increase window size if atmost k elements are found
            end++;
        }

        //calculate for atmost k-1 diff ints
        start=0, end=0, countDiff=0;
        freq.clear();
        k--;
        while(end<nums.size()){
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                countDiff++;
            
            //decrase the window size once you get atmost k diff elements
            while(countDiff > k){
                freq[nums[start]]--;
                //if any element gets disappeared from window
                if(freq[nums[start]] == 0)
                    countDiff--;
                start++;
            }
            //get the total 
            total -= end-start+1;
            //increase window size if atmost k elements are found
            end++;
        }

        return total;
    }
};