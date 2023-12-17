//merge sort in non increasing order

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
	vector<int> temp(end-start+1);
	int left = start;
	int right = mid+1;
	int index = 0;
	while(left<=mid && right<=end){
		if(arr[left]>=arr[right]){
			temp[index] = arr[left];
			left++;
			index++;
		}else{
			temp[index] = arr[right];
			right++;
			index++;
		}
	}
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
	//copy the sorted order into original arr
	index = 0;
	while(start<=end){
		arr[start] = temp[index];
		index++;
		start++;
	}
}

void mergeSort(int arr[], int start, int end){
	if(start == end)
		return;
	int mid = start + (end-start)/2;
	//sort left part
	mergeSort(arr, start, mid);
	//sort right part
	mergeSort(arr, mid+1, end);
	//merge the two halves
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
