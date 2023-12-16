class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==0)
            return 1;
        //using for loop, implement fibonacci as nth stair solution follows fibnacci series
        int n1 = 1;//for 0th stair
        int n2 = 1;//for 1th stair
        int res = n1 + n2;//for the next stair, it will be sum of two stairs
        for(int i=3; i<=n; i++){
            n1 = n2;
            n2 = res;
            res = n1 + n2;
        }
        return res;
    }
};
