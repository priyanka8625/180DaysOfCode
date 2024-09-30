
class Solution {
  public:
    int assignMiceHoles(int N , int M[] , int H[]) {
        // code here
        sort(M, M+N);
        sort(H, H+N);
        int maxTime = 0;
        for(int i=0; i<N; i++){
            maxTime = max(maxTime, abs(M[i]-H[i]));
        }
        return maxTime;
    }
};