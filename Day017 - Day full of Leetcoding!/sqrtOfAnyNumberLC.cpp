//sqrt of x LC

class Solution {
public:
    int mySqrt(int x) {
        long i=2, sq=1;
        while(sq<=x && (sq>=INT_MIN && sq<=INT_MAX)){
            sq = i*i;
            if(sq==x)
                return i;
            i++;
        }   
        return i-2;    //because i-2 will be int value whose square will be the closest of x
    }
};
