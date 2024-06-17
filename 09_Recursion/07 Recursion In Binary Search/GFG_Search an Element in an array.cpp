class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
    	return linearSearch(arr, 0, X, N);
    }
    int linearSearch(int arr[], int index, int X, int n){
        if(index == n)
    		return -1;
    	if(arr[index] == X)
    		return index;
    	return linearSearch(arr, index+1, X, n);
    }
};

