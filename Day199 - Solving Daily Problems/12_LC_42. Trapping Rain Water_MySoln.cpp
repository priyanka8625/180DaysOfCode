class Solution {
public:
    int trap(vector<int>& heights) {
        //find the maximum building from the given heights
        int maxBuilding = INT_MIN, maxBuildingIndex=-1, trappedWater=0, n=heights.size();
        for(int i=0; i<n; i++){
            if(maxBuilding <= heights[i]){
                maxBuilding = heights[i];
                maxBuildingIndex = i;
            }
        }
        
        //now iterate from i=0 to the last occurance of maxBuilding 
        //and find the water that can be trapped at each index by taking reference of leftside 
        //max height till current index and max building height
        int i=0, leftMaxHeight=-1;
        while(i<maxBuildingIndex){
            //water can be trapped only when height!=maxBuilding and leftMax > currentHeight
            if(heights[i] != maxBuilding && heights[i] < leftMaxHeight){
                trappedWater += (leftMaxHeight - heights[i]);
            }else if(heights[i]>leftMaxHeight){
                leftMaxHeight = heights[i];
            }
            i++;
        }
        i = n-1;
        int rightMaxHeight=-1;
        while(i>maxBuildingIndex){
            //same algorithm will be applied here 
            if(heights[i] != maxBuilding && heights[i] < rightMaxHeight){
                trappedWater += (rightMaxHeight - heights[i]);
            }else if(heights[i] > rightMaxHeight){
                rightMaxHeight = heights[i];
            }
            i--;
        }
        return trappedWater;
    }
};