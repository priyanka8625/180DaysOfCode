class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        int n = matrix.size();
        //reverse all the columns one by one
        for(int j=0; j<n; j++){
            int start=0, end=n-1;
            while(start<end){
                swap(matrix[start][j], matrix[end][j]);
                start++;
                end--;
            }
        }
        //now reverse all the rows one by one
        for(int i=0; i<n; i++){
            int start=0, end=n-1;
            while(start<end){
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};
