class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        //generate all the n! permutations
        permutations(nums, 0, ans);
        return ans;
    }

    void permutations(vector<int> &nums, int index, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        //create a vector use of size 21 
        //to store the visited status of eachnumber in array
        //as it is already given that -10<=num<=10 hence any number in array will be -10 to 10
        //-10 -9 -8 ... 1 2 ... 10 will be represented as 0 1 2 ... 11 12 ... 20
        //to access the index of -10 or any number in nums we have a formula nums[i]+10
        //for nums[i] = -10, index will be nums[i]+10=-10+10=0
        vector<int> use(21,0);
        //if nums[i] in use is 1, it means that number is already taken and we can move further
        for(int i=index; i<nums.size(); i++){
            if(use[nums[i]+10] == 0){
                swap(nums[index], nums[i]);
                permutations(nums, index+1, ans);
                //backtract
                swap(nums[index], nums[i]);
                use[nums[i]+10] = 1;
            }
        }
    }
};
