class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;

        for(int i=1; i<=(n/4); i++){
            long long res = powOf4(i);
            if(n == res)
                return true;
            if(res>n)
                return false;
        }
        return false;
    }
    long long powOf4(int power){
        if(power == 1)
            return 4;
        return 4 * powOf4(power-1);
    }
};
