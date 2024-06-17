class Solution {
public:
    int climbStairs(int n) {
        //using recursion, it gives TLE for n=45, we'll find an approach using DP soon!!!
        if(n<=1)
            return 1;
        return climbStairs(n-1) + climbStairs(n-2);
    }
};
