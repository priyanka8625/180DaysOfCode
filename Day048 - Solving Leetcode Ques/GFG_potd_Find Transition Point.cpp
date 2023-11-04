class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int start=0, end=n-1, mid=0, index=-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==1){
                index = mid;
                end = mid-1; //look for anyother 1 s present at left
            }
            else if(arr[mid]==0)
                start = mid + 1;
        }
        return index;
    }
};
