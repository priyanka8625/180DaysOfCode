class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size(), ans=-1;
        int start=0, end=n-1, mid=0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==target)
                return mid;
            else if(arr[mid]>=arr[0]){
                if(arr[start]<=target && target<=arr[mid])//pre
                    end = mid - 1;
                else
                    start = mid + 1;
            }else{
                if(arr[mid]<=target && target<=arr[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return ans;
    }
};
