//selection sort HW : Use a Selection Sort Algorithm to sort the array of integers in decreasing order.

#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int n=0, arr[100], max=0;
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for rounds from 1 to n-1
	for(int i=0; i<n-1; i++){
		max = i;
		//to find the maximum element in the array to place it in the right pos
		for(int j=i+1; j<n; j++){
			if(arr[j]>arr[max])
				max = j;
		}
		//now swap the max ele with it's right position
		swap(arr[i], arr[max]);
	}
	printArray(arr, n);
	return 0;
}
