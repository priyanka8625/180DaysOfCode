class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i=0,j=0;
	    //shift all the non zero values at beginning of array
	    while(j<n && i<=j){
	        if(arr[j]!=0){
	            arr[i] = arr[j];
	            i++;
	            j++;
	        }else{
	            j++;
	        }
	    }
	    
	    //then from i to n-1 fill all the zeros
	    while(i<n){
	        arr[i] = 0;
	        i++;
	    }
	}
};
