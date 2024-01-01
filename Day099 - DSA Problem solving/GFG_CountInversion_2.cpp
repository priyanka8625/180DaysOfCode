class Solution
{   
    public: 
    void merge(long long arr[], int start, int mid, int end, long long int &ans){
        vector<long long>temp(end-start+1);
        int left = start, right = mid+1, index = 0;
        while(left<=mid&&right<=end){
            if(arr[left]<=arr[right])
            {
                temp[index]=arr[left];
                index++, left++;
            }
            else
            {
                temp[index]=arr[right];
                ans+= (mid-left+1);
                index++, right++;
            }
        }
        // left array is not empty yet
        while(left<=mid)
        {
            temp[index]=arr[left];
            index++, left++;
        }
        // right array is not empty yet
        while(right<=end)
        {
            temp[index]=arr[right];
            index++, right++;
        }
        index=0;
        // put these value in array
        while(start<=end)
        {
            arr[start]=temp[index];
            start++, index++;
        }
    }
    void mergesort(long long arr[], int start, int end, long long int &ans){
        if(start==end)
            return;
            
        int mid = start+(end-start)/2;
        // left side
        mergesort(arr,start,mid,ans);
        // right side
        mergesort(arr,mid+1,end,ans);
        merge(arr,start,mid,end,ans);
    }
    long long int inversionCount(long long arr[], long long N){
        // Your Code Here
        long long int ans = 0;
        mergesort(arr,0,N-1,ans);
        return ans;
    }
};
