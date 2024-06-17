#include<iostream>
using namespace std;

void print(int arr[], int index, int n){
	if(index == n-1)
		return;
	cout<<arr[index];
	print(arr, index+1, n);
}

void printRev(int arr[], int index, int n){
	if(index == n-1)
		return;
	print(arr, index+1, n);
	cout<<arr[index];
}

int main(){
	int n=0, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	print(arr, 0, n);
	printRev(arr, 0, n);
	return 0;
}
