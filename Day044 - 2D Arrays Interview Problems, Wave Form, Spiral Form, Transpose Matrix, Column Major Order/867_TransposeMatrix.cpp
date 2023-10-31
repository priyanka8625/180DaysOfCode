class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> ans;
        //transpose using the lower triangle of diagonal elements
        for(int col=0; col<n; col++){
            vector<int> matrixCol;
            for(int row=0; row<m; row++)
                matrixCol.push_back(matrix[row][col]);//extract col wise vectors from matrix
            //and store them into ans row wise
            ans.push_back(matrixCol);
        }
        return ans;
    }
};
