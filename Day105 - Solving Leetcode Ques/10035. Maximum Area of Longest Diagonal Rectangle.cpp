class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float maxDiagonal = -1;//stores the value of maximum diagonal 
        int maxArea = -1; //stores the maximum area of the maximum diagonal pair
        int n = dimensions.size();
        for(int i=0; i<n; i++){
            float diagonal = sqrt((dimensions[i][0] * dimensions[i][0])+(dimensions[i][1] * dimensions[i][1]));
            // if current pair's diagonal is greater among all till now
            if(maxDiagonal < diagonal){
               maxDiagonal = diagonal;
               maxArea = (dimensions[i][0] * dimensions[i][1]);
            }else if(maxDiagonal == diagonal){
                // means we have got another pair with maximum diagonal,
                // so, maxArea will contain the area which has maximm area among the two
                maxArea = max(maxArea, (dimensions[i][0] * dimensions[i][1]));
            }
        }
        return maxArea;
    }
};
