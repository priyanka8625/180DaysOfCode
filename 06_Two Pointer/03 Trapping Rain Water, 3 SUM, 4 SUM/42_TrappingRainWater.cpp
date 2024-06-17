class Solution {
public:
    int trap(vector<int>& height) {
        int maxRight=0, maxLeft=0, water=0, n=height.size();
        int maxHeight=height[0], index=0;
        //find max height building
        for(int i=1; i<n;i++){
            if(maxHeight<height[i]){
                maxHeight = height[i];
                index = i;
            }
        }
        //left part 
        for(int i=0; i<index;i++){
            if(maxLeft > height[i])
                water += maxLeft - height[i];
            else
                maxLeft = height[i];
        }
         //right part 
        for(int i=n-1; i>index;i--){
            if(maxRight > height[i])
                water += maxRight - height[i];
            else
                maxRight = height[i];
        }
        return water;
    }
};
