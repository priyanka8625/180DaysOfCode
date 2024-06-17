class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end=x;
        long square, ans, mid;
        while(start<=end){
            mid = start + (end-start)/2;
            square = mid*mid;
            if(square == x)
                return mid;
            else if(square < x){
                start = mid + 1;
                ans = mid;//we need to find the closest value whose squareis closest to x
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }
};
