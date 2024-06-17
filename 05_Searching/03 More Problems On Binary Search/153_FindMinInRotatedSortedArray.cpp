class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end= n-1, mid=0, ans=0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]>=arr[0])
                start = mid + 1;
            else if (arr[mid]<arr[0]){
                end = mid - 1;
                ans = mid;
            }
        }
        return arr[ans];
    }
};
