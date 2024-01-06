class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>> subarrays;
        int n = nums.size();
        //create all the unique non empty contiguous subarrays
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=i; j<n; j++){
                temp.push_back(nums[j]);
                //now push this temp just after adding a new element 
                subarrays.insert(temp);// this will result in 
                // for i=0, subarrays=> 2 2,3 2,3,3 2,3,3,2 2,3,3,2,2
            }
        }
        int ans = 0;//to keep count of number of subarrays

        //now filter out the subarrays according to given 2 conditions
        for(auto& temp : subarrays){
            int numOfDivisible = 0, i=0;
            //count number of elements in subarrays that are divisible by p
            while(i<temp.size()){
                if(temp[i]%p == 0)
                    numOfDivisible++;
                i++;
            }
            //check if number of divisible is atmost k
            if(numOfDivisible <= k)
                ans++;
        }
        return ans;
    }
};
