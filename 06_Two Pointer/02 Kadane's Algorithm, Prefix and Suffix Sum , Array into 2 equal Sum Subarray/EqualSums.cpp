
class Solution{
    public:
    vector<int> EqualSum(int a[], int n)
    {
        int minDiff = INT_MAX, minDiffIndex = -1, subArray = 1, totalSum = 0, prefix = 0;
        //find total sum
        for (int i = 0; i < n; ++i)
            totalSum += a[i];
        
        for (int i = 0; i < n; ++i)
        {
            //go on finding the preffix sum of the array
            prefix += a[i];
            
            //find right subarray's sum by using the preffix sum
            int rightSum = totalSum - prefix;
            //then find whatis the diff between these two left and right sums
            int diff = abs(rightSum - prefix);
            //if the difference i.e. the element which is missing to make left and right ums equal, 
            //is less than the minimum element we calculated previously
            if (diff < minDiff)
            {
                //if yes, then find the index of inserting that element 
                minDiff = diff;
                minDiffIndex = i + 1;
                //and find the subarray where it will be inserted - left or right
                if (rightSum >= prefix)//if rightSum was >= preffixSum then obviousy we'll add the new element into left subarray
                    subArray = 1;
                else//elseinto the right subarray
                    subArray = 2;
            }
        }
        //finally retrn the minDiffi.e. min ele to be inserted, it's index and the subarray 
        return {minDiff, minDiffIndex + 1, subArray};
    }
};

