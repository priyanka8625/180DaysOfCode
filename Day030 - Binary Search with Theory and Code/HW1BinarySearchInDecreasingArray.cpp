//An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

#include<iostream>
using namespace std;

int binarySearchDecreasing(int *arr, int &n, int &key){
	int start=0, end=n-1, mid=0;
	while(start<=end){
		mid = start + (end-start)/2;
		if(arr[mid]==key)
			return mid;
		else if (arr[mid]<key)
			end = mid-1;
		else
			start = mid + 1;
	}
	return -1;
}

int main(){
	int n, arr[100],key;
	cout<<"Enter size of array :";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Enter element to be searched : ";
	cin>>key;
	
	cout<<"Element present at : "<<binarySearchDecreasing(arr, n, key);
	return 0;
}
