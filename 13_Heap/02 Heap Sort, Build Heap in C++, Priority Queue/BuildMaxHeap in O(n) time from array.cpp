#include<iostream>
using namespace std;

void print(int* arr, int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void heapify(int* arr, int index, int n){
	int largest = index;
	int left = 2*index+1;
	int right = 2*index+2;
	if(left<n && arr[left]>arr[largest])
		largest = left;
	if(right<n && arr[right]>arr[largest])
		largest = right;
	if(largest != index){
		swap(arr[largest], arr[index]);
		heapify(arr, largest, n);
	}
}

void buildMaxHeap(int* arr, int n){
	//step-down approach: compare each node with it's children and swap if order is not maintained, 
	//do this unless current element reaches it's correct position
	//start from n/2-1, because that is the point from where you'll get the elements having children in binary tree, elements after n/2-1 are leaf nodes
	for(int i=n/2-1; i>=0; i--){
		heapify(arr, i, n);//heapify
	}
	
}

int main(){
	int arr[] = {10, 3, 8, 9 , 5, 13, 18, 14, 11, 70};
	buildMaxHeap(arr, 10); //takes O(nlogn) time:logn for heapify for n no. of the elements
	print(arr, 10);
	return 0;
}
