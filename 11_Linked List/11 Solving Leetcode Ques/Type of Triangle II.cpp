class Solution {
public:
    string triangleType(vector<int>& nums) {
        string type = "";
        //the given sides are of triangle if the sum of any two sides is > the max side of the triangle
        int maxSide = max(max(nums[0], nums[1]), nums[2]);
        int sum = nums[0] + nums[1] + nums[2];
        
        //sum except maxSide should be greater than maxSide to form a triangle
        if(sum-maxSide > maxSide) 
            if(nums[0] == nums[1] && nums[1] == nums[2])
                return type += "equilateral";
            else if(nums[0]==nums[1] || nums[2]==nums[1] || nums[0]==nums[2])
                return type += "isosceles";
            else
                return type += "scalene";
        //else it's not a triangle
        return "none";
    }
};