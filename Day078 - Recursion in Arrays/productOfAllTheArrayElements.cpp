//Find the Product of all elements in a given array of size N
#include<iostream>
using namespace std;

int product(int arr[], int index, int n){
	if(index == n-1)
		return arr[index];
	return arr[index] * product(arr, index+1, n);
}


int main(){
	int n=0, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	cout<<product(arr, 0, n);
	return 0;
}
