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

//Time Complexity: O(nlogn)-> for each element, we might traverse logn times ie. traverse the height of tree for a single element
//Space Complexity: O(1)-> if we solve it using iterative approach instead of recursion for heapify
void heapsort(int* arr, int n){
	//exchange the first and last element, the max element goes at the end of array in the ascending order
	//algorithm:
	//1. replace first element with last element
	//2. dcrease size by 1
	//3. apply heapify on first to size indices
	
	for(int i=n-1; i>=0; i--){
		swap(arr[i], arr[0]);
		heapify(arr, 0, i);//place the leaf node swapped at 0'th index at it's right position, and the size will i i.e. n-1, n-2,...
	}
}

int main(){
	int arr[] = {10, 3, 8, 9 , 5, 13, 18, 14, 11, 70};
	buildMaxHeap(arr, 10);
	print(arr, 10);
	heapsort(arr, 10); //takes O(n) time
	print(arr, 10);
	return 0;
}
