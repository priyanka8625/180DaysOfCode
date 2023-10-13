//Bubble Sort Algorithm to sort the array of integers in increasing order 
//by taking the smallest number to first place by starting from the last. Question was explained in the class

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
	//for tracting rounds i.e. from 1-(n-1)
	for(int i=1; i<=n-1; i++){
		bool isSorted = true;
		//start comparing from the last element upto i'th elemnt 
		for(int j=n-1; j>=i; j--){
			//check if they follow the correct increasing order
			if(arr[j]<arr[j-1]){
				swap(arr[j], arr[j-1]);
				isSorted = false;
			}
		}
		if(isSorted)
			break;
	}
	printArray(arr, n);
	return 0;
}
