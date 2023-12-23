class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        if(n<3)
            return -1;
        //sort nums
        sort(nums.begin(), nums.end());
        //check from the largest side i=n-1 upto i=2 to find a1+...ak-1 >ak where k=i
        //go upto i=2 cuz we need atleast three sides of the polygon
        for(int i=n-1; i>=2; i--){
            long long sum=0;
            //add sides from j=0 to j=i
            for(int j=0; j<i; j++)
                sum += nums[j];
            if(sum>nums[i])
                return sum + nums[i];
        }
        return -1;
    }
};
