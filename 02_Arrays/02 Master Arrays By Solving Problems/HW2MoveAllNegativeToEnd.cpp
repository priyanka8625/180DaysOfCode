class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int count=1;
        sort(arr,arr+n);   //sort the array by passing first and last ele addresses
        for(int i=0;i<n;i++){
            if(arr[i]<=0)
                arr[i]=0;
            else if(arr[i]>0 && arr[i]==count)
                count++;
        }
        return count;
    }
};
