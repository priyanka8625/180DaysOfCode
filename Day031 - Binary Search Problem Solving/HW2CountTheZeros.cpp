
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int start = 0, end = n-1, mid=0, first=0, last=0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==0){
                first = mid;
                end = mid - 1;
            }else if(arr[mid]==1){
                start = mid + 1;
            }
        }
        start = 0, end = n-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==0){
                last = mid;
                start = mid + 1;
            }else if(arr[mid]==1){
                start = mid + 1;
            }
        }
        return (last - first )+1;
    }
};
