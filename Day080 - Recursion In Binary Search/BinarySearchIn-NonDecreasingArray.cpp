//binary Search in non-decreasing array

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int X){
	if(start>end)
		return 0;
	int mid = start + (end-start)/2;
	if(arr[mid] == X)
		return 1;
	else if(arr[mid]<X)
		return binarySearch(arr, mid+1, end, X);
	else
		return binarySearch(arr, start, mid-1, X);
}

int main(){
	int n, arr[100], X;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the key to be searched: ";
	cin>>X;
	cout<<binarySearch(arr, 0, n-1, X)<<endl;
	return 0;
}
