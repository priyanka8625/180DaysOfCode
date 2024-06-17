class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0, end = n-1, mid=0, ans=n;//ans=n so that when the array is sorted and all elements are present i.e. there are no missing numbers in array then make k+array's last length which will be always length = arr[n-1] in this case, and return 
         
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]-(mid+1) >= k){
                ans = mid;
                end = mid - 1;
            }else{
               start = mid + 1; 
            }
        }
        return ans+k;
    }
};
