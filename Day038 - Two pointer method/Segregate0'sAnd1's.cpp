class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int left=0, right=n-1;
        while(left<right){
            if(arr[left]==1 && arr[right]==0){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
            if(arr[left]==0)
                left++;
            if(arr[right]==1)
                right--;
        }
    }
};
