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
        int i=0, j=n-1;
        while(i<index || j>index){
        	//for left subarray find the water trapped
        	if(i<index && maxLeft > height[i])
        		water += maxLeft - height[i];
        	else
        		maxLeft = height[i];
        	
        	//for right subarray find the water trapped
        	if(j>index && maxRight > height[j])
                water += maxRight - height[j];
            else
                maxRight = height[j];

            //move to next building
            i++;
            j--;
		}
        return water;
    }
};
