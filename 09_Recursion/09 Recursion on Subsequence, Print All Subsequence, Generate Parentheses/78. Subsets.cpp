class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        createSubsequences(nums, 0, nums.size(), ans, temp);
        return ans;
    }
    void createSubsequences(vector<int> nums, int index, int n, vector<vector<int>> &ans, vector<int> &temp){
        if(index == n){
            ans.push_back(temp);
            return;
        }
        //don't include current index value
        createSubsequences(nums, index+1, n, ans, temp);
        //include current index value
        temp.push_back(nums[index]);
        createSubsequences(nums, index+1, n, ans, temp);
        //backtrack temp to pop back the currently added index value and pass it back to the previous recursive call in the same way as it was before(while calling the function)
        temp.pop_back();
    }
};
