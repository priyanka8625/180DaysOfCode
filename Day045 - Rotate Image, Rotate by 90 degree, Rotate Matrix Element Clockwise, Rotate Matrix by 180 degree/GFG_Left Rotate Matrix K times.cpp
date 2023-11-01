class Solution {
    public:
        void reverse(int low,int high,int N,vector<vector<int>>& Mat){
            while(low<high){
                for(int i=0;i<N;i++){
                    int temp = Mat[i][low];
                    Mat[i][low] = Mat[i][high];
                    Mat[i][high] = temp;
                }
                low++;
                high--;
            }
            return;
        }
    
        vector<vector<int>> rotateMatrix(int N, int M, int K, vector<vector<int>> Mat) {
            // code here
            K=K%M;
            if(K==0){
                return Mat;
            }
            reverse(0,K-1,N,Mat);
            reverse(K,M-1,N,Mat);
            reverse(0,M-1,N,Mat);
            return Mat;
        }
};
