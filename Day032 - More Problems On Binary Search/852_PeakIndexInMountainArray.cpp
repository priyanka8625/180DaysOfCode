class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start=0, end=n-1, mid=0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                return mid;
            else if (arr[mid]>arr[mid-1]) //if 
                start = mid;
            else
                end = mid;
        }
        return -1;
    }
};
