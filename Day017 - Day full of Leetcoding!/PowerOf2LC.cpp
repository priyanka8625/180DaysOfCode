//Power of 2 or not LC

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int bit;
        if(n <= 0)
            return false;
        
        while(n!=1){
            bit = n&1;
            if(bit!=0)
                return false;
            n>>=1;
        }
        return true;
    }
};
