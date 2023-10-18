class Solution {
  public:
    int cubeRoot(int N) {
        int start = 0, end = N;
        long cube, mid=0, ans=-1;
        while(start<=end){
            mid = start + (end-start)/2;
            cube = mid*mid*mid;
            if(cube == N)
                return mid;
            else if(cube < N){
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};
