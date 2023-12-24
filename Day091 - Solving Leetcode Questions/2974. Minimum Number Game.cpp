
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        //sort the nums vector in ascending order
        sort(nums.begin(), nums.end());//takes o(nlogn) time
        int i=0, j=1, n = nums.size();
        while(i<n-1){
            //swap current pair
            swap(nums[i], nums[j]);
            //move for next pair
            i+=2;
            j+=2;
        }
        return nums;
    }
};
