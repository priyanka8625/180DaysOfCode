class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> unique;
        for(int num:nums)
            if(num>0)
                unique.insert(num);
        
        //answer will be equal to number of unique elements in nums
        return unique.size();
    }
};