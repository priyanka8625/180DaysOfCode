//Write a recursive function to reverse the elements of an array.
#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
	if(start>=end)
		return;
	
	swap(arr[start], arr[end]);
	reverse(arr, start+1, end-1);
}


int main(){
	int n, arr[100], X;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//we're sending arr from here which means we're sending the starting address and 
	//hence it goes and gets stored into a pointer in the called funcion so by default the concept of `call by reference` is applied here
	reverse(arr, 0, n-1);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
