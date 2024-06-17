class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int second, first = INT_MIN;
	    for(int i=0; i<n; i++){
	        if(arr[i]>first){
	            second = first;
	            first = arr[i];
	        }else if (arr[i]>second && first != arr[i]){
	            second = arr[i];
	        }
	    }
	    if(second == INT_MIN)
	        return -1;
	    return second;
	}
}
