
class Solution {
    private:
        vector<vector<int>> rotate_90(int N, int M, vector<vector<int>> matrix) {
            //first transpose a matrix 
            for(int i=0; i<N-1; i++)
                for(int j=i+1; j<M; j++)
                    swap(matrix[i][j], matrix[j][i]);
            
            //then reverse each col 
            for(int j=0; j<M; j++){
                int start=0, end=N-1;
                while(start<end){
                    swap(matrix[start][j], matrix[end][j]);
                    start++;
                    end--;
                }
            }
            return matrix;
        }
        vector<vector<int>> rotate_180(int N, int M, vector<vector<int>> matrix) {
            //reverse each row 
            for(int i=0; i<N; i++){
                int start=0, end=M-1;
                while(start<end){
                    swap(matrix[i][start], matrix[i][end]);
                    start++;
                    end--;
                }
            }
            
            //reverse each col
            for(int j=0; j<M; j++){
                int start=0, end=N-1;
                while(start<end){
                    swap(matrix[start][j], matrix[end][j]);
                    start++;
                    end--;
                }
            }
            return matrix;
        }
        vector<vector<int>> rotate_270(int N, int M, vector<vector<int>> matrix) {
            //anticlockwise 270 degree = clockwise 90 degree
            //first transpose a matrix 
            for(int i=0; i<N-1; i++)
                for(int j=i+1; j<M; j++)
                    swap(matrix[i][j], matrix[j][i]);
            
            //then reverse each row 
            for(int i=0; i<N; i++){
                int start=0, end=M-1;
                while(start<end){
                    swap(matrix[i][start], matrix[i][end]);
                    start++;
                    end--;
                }
            }
            return matrix;
        }
    public:
        vector<vector<int>> rotateMatrix(int N, int M, int K, vector<vector<int>> Mat) {
            //first identify how many times you need to roatate the matrix 
            //if user enter 9 then it simply means to rotate by 1 time (90 degrees)
            int k=k%4;//9%4=1
            
            //left rotate = anticlockwise rotation
            //then according to the k's value call respective functions
            if(k==1)
                return rotate_90(N, M, Mat);
            else if(k==2)
                return rotate_180(N, M, Mat);
            else if(k==3)
                return rotate_270(N, M, Mat);
            else//360 rotation = no rotation(original matrix)
                return Mat;
        }
};
