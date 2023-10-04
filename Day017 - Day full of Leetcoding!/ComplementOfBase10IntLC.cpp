//complement of base 10 int LC problem

class Solution {
public:
    int bitwiseComplement(int n) {
        int num = n, ans=0, bit=0, mul=1;
        int mask=0;
        // edge case
        if(n==0)
            return 1;
        
        while(num){
            bit = num&1;
            ans = (!bit) * mul + ans;
            num>>=1;
            mul *= 2;
        }
        return ans;
    }
};
