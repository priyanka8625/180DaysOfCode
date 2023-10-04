//gfg solution

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        if(N==1)
            return 1;
        return (N*N) + squaresInChessBoard(N-1);
    }
};
