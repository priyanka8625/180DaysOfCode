//Insertion Sort Algorithm to sort the array of integers in increasing order 
//if we start from the last element of the array. Question was explained in the class.

#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int n=0, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for tracting rounds i.e. from (n-1) to 1
	for(int i=n-1; i>=1; i--){
        for(int j = i-1; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
	printArray(arr, n);
	return 0;
}
