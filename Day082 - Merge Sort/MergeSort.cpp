//merge sort

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
	//create a temperory array/vector of combined size of both the arrays
	vector<int> temp(end-start+1);
	//create three variables to point to three different arrays
	int left=start;//to point to left part
	int right = mid+1;//to point right part
	int index = 0;//to point temp
	//merge sorted arrays
	while(left<=mid && right<=end){
		if(arr[left]<=arr[right]){
			temp[index] = arr[left];
			left++;
			index++;
		}else{
			temp[index] = arr[right];
			right++;
			index++;
		}
	}
	//add the remaining values of array
	while(left<=mid){
		temp[index] = arr[left];
		left++;
		index++;
	}
	while(right<=end){
		temp[index] = arr[right];
		right++;
		index++;
	}
	
	//now copy this temp array into original arr
	index=0;
	while(start<=end){
		arr[start] = temp[index];
		start++;
		index++;
	}
	//done merging the sorted arrays into original arr
}

void mergeSort(int arr[], int start, int end){
	if(start == end)//when we have reached an array which has only a single element
		return;
	//find mid index to divide the array
	int mid = start + (end-start)/2;
	//sort the left part of array
	mergeSort(arr, start, mid);
	//sort right part of array
	mergeSort(arr, mid+1, end);
	//merge the sorted left and right parts such that the original array is also sorted
	merge(arr, start, mid, end);
}

int main(){
	int n, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	mergeSort(arr, 0, n-1);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
