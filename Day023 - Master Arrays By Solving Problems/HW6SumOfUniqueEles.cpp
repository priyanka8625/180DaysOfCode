class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size(), sum=0;
        map<int,int> count;
        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(count[nums[i]]==1)
                sum += nums[i];
        }
        return sum;
    }
};
