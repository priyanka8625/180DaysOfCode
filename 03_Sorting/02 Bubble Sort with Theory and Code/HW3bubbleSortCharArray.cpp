// Bubble Sort Algorithm to sort the array of char in ascending order.

#include<iostream>

using namespace std;

void printArray(char a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int n=0;
	char arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for tracting rounds i.e. from 1-(n-1)
	for(int i=1; i<=n-1; i++){
		//by default assume the iteration as fully sorted 
		bool isSorted = true;
        for(int j =0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                //if you perform any swaps it means array is not already sorted
                isSorted = false;
            }
        }
        //if array is alreadysorted i.e. matches the bestcase 
        if(isSorted)
        	break;
    }
	printArray(arr, n);
	return 0;
}
