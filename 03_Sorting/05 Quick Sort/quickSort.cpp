#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int start, int end){
	int pos = start;//to keep track of the next element to be placed at the left of pivot's correct position
	for(int i=start; i<=end; i++){
		if(arr[i]<=arr[end]){
			//if current element is <= pivot element then place it on the left side i.e. pos
			swap(arr[pos], arr[i]);
			pos++;
		}
	}
	return pos-1;//after partitioning pos-1 will point to correct pivot index;
}

void quickSort(int arr[], int start, int end){
	if(start>=end)//if only single or no elements are present in array
		return;
	
	//apply partitioning in the current array i.e. start to end and get the correct pos of pivot element
	int pivot = partition(arr, start, end);
	//apply partitioning in the left part
	quickSort(arr, start, pivot-1);
	//apply partitioning in the right part
	quickSort(arr, pivot+1, end);
}

int main(){
	int n, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	quickSort(arr, 0, n-1);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
