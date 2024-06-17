class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0, end=num;
        long long mid=0;
        while(start<=end){
            mid = start + (end-start)/2;
            long long sq = mid*mid;
            if(sq == num)
                return true;
            else if(sq > num)
                end = mid-1;
            else
                start = mid+1;
        }
        return false;
    }
};
