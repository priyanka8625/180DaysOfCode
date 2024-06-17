class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rowCount = matrix.size(), colCount = matrix[0].size();
        //rowCount is always equal to colCount
        //transpose matrix
        for(int i=0; i<rowCount-1; i++){
            for(int j=i+1; j<rowCount; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse each row
        for(int i=0; i<rowCount; i++){
            int start=0, end=rowCount-1;
            while(start<end){
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};
