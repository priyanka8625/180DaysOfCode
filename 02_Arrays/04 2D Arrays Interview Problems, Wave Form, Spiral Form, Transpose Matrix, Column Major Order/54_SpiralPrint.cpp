class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowCount = matrix.size(), colCount = matrix[0].size();
        vector<int> ans;
        int top=0, right=colCount-1, bottom=rowCount-1, left = 0;
        //top, bottom are rows
        //left, right are cols
        while(top<=bottom && left<=right){
            //print topmost row
            for(int j=left; j<=right; j++)
                ans.push_back(matrix[top][j]);
            top++;//update pointer to print next topmost row

             //print rightmost col
            for(int i=top; i<=bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;//update pointer to print next rightmost col

             //print bottommost row
            for(int j=right; j>=left; j--)
                if(top<=bottom)//edge case
                    ans.push_back(matrix[bottom][j]);
            bottom--;//update pointer to print next bottommot row

             //print leftmost row
            for(int i=bottom; i>=top; i--)
                if(left<=right)//edge case
                    ans.push_back(matrix[i][left]);
            left++;//update pointer to print next leftmost col
        }
        return ans;
    }
};
