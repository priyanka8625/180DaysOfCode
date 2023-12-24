//Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        //generate all the n! permutations
        permutations(nums, 0, nums.size(), ans);
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }

    void permutations(vector<int> &nums, int index, int n, set<vector<int>> &ans){
        if(index == n){
            ans.insert(nums);
            return;
        }
        for(int i=index; i<n; i++){
            swap(nums[index], nums[i]);
            permutations(nums, index+1, n, ans);
            //backtract
            swap(nums[index], nums[i]);
        }
    }
};
