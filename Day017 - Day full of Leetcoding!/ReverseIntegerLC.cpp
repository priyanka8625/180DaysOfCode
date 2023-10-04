//reverse an integer LC

class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int rem=0;

        while(x && (rev>INT_MIN && rev<INT_MAX)){
            rem = x%10;
            rev = rev*10 + rem;
            x/=10;
        }
        if(rev<INT_MIN || rev>INT_MAX)
            rev = 0;

        return rev;
    }
};
