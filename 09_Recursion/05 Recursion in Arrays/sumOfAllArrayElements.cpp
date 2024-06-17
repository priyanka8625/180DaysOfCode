#include<iostream>
using namespace std;

int sum(int arr[], int index, int n){
	if(index == n-1)
		return arr[index];
	return arr[index] + sum(arr, index+1, n);
}

int revSum(int arr[], int index, int n){
	if(index == n-1)
		return arr[index];
	return sum(arr, index+1, n) + arr[index] ;
}

int main(){
	int n=0, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	cout<<sum(arr, 0, n);
	return 0;
}
