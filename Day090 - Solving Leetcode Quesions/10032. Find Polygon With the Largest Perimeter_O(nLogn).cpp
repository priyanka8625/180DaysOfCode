class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        if(n<3)
            return -1;
        //sort nums
        sort(nums.begin(), nums.end());

        //calculate sum of all the sides
        long long sum=0;
        for(int i=0; i<n; i++)
            sum+=nums[i];
        //check from the largest side i=n-1 upto i=2 to find a1+...ak-1 >ak where k=i
        //go upto i=2 cuz we need atleast three sides of the polygon
        for(int i=n-1; i>=2; i--){
            //subtract largest side from sum to check if sumk-1>largest side
            sum -= nums[i];
            if(sum>nums[i])
                return sum + nums[i];
        }
        return -1;
    }
};
