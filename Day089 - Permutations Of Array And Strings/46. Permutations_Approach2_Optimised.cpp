class Solution {
public:
    void solve(vector<int> arr, vector<vector<int> > &ans, int index){
        if(index == arr.size()){//we've got our permutation
            ans.push_back(arr);
            return;
        }
        
        //traverse the visited vector to find the unvisited values and add them up into temp
        for(int i=index; i<arr.size(); i++){
            swap(arr[i], arr[index]);
            solve(arr, ans, index+1);
            swap(arr[i], arr[index]);//backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};
