class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> ans;
        int n = arr.size(), first=-1, last=-1;
        int start=0, end=n-1, mid;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==target){
                first = mid;
                end = mid - 1;
            }else if(arr[mid]>target)
                end = mid - 1;
            else 
                start = mid + 1;
        }
        start = 0, end = n-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==target){
                last = mid;
                start = mid + 1;
            }else if(arr[mid]>target)
                end = mid - 1;
            else 
                start = mid + 1;
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
