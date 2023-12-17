#include<iostream>
using namespace std;

bool linearSearch1(int arr[], int index, int X){
	if(index == -1)
		return 0;
	if(arr[index] == X)
		return 1;
	return linearSearch1(arr, index-1, X);
}
bool linearSearch2(int arr[], int index, int X, int n){
	if(index == n)
		return 0;
	if(arr[index] == X)
		return 1;
	return linearSearch2(arr, index+1, X, n);
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
	cout<<linearSearch1(arr, n-1, X)<<endl;
	cout<<linearSearch2(arr, 0, X, n);
	return 0;
}
