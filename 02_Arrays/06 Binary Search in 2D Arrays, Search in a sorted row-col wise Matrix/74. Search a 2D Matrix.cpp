class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N=matrix.size(), M=matrix[0].size();
        int start=0, end= N*M-1, mid=0;
        while(start<=end){
            mid = start + (end-start)/2;
            int row = mid/M;
            int col = mid%M;
            if(matrix[row][col]==target)
                return 1;
            else if(matrix[row][col]<target)
                start = mid + 1;
            else 
                end = mid - 1;
        }
        return 0;
    }
};
