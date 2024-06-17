class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       return binarySearch(arr, 0, N-1, K);
       
    }
    int binarySearch(int arr[], int start, int end, int X){
    	if(start>end)
    		return -1;
    		
    	int mid = start + (end-start)/2;
    	if(arr[mid] == X)
    		return 1;
    	else if(arr[mid]<X)
    		return binarySearch(arr, mid+1, end, X);
    	else
    		return binarySearch(arr, start, mid-1, X);
    }
};

