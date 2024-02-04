class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int boundaryCount = 0, n=nums.size(), antSpace=0;
        //increase boundaryCount when the ant becomes zero
        for(int i=0; i<n; i++){
            antSpace += nums[i];
            if(antSpace == 0)
                boundaryCount++;
        }
        return boundaryCount;
    }
};