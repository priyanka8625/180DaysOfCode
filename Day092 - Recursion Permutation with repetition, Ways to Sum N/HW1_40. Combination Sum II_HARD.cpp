class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //sort the vector to skip duplicate elemnts while creating combinations
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        findCombinations(candidates, 0, candidates.size(), target, temp, ans);
        return ans;
    }

    void findCombinations(vector<int> &candidates, int index, int n, int target, vector<int> &temp, vector<vector<int>> &ans){
        //base conditions
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target<0)
            return;
        
        //at each position/index any element from the vector can occur
        //so apply recursive call for all the unique elements at current position
        for(int i=index; i<n; i++){
            //check if i and index are pointing to different indices and candidates[i-1] is 
            //already inserted in the vector, if yes then skip the current index
            if(index!=i && candidates[i-1] == candidates[i])
                continue;

            //add current index value to temp
            temp.push_back(candidates[i]);
            findCombinations(candidates, i+1, n, target - candidates[i], temp, ans);
            temp.pop_back();
        }
    }
};
