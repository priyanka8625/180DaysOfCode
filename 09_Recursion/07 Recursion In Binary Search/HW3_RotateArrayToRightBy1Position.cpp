//Write a recursive function to rotate elements in an array to the right by 1 position.

//logic - 
//when we swap all the elemnts of array starting from 1 index to n-1 index with oth index element then we get an array which is rotated to right by 1 pos 
//for example:
//i/p: 10 8 4 7 7 3
//o/p: 3 10 8 4 7 7 
//our logic: 
//swap 0 with 1: 8 10 4 7 7 3
//swap 0 and 2:  4 10 8 7 7 3
//swap 0 and 3:  7 10 8 4 7 3
//swap 0 and 4:  7 10 8 4 7 3
//swap 0 and 5:  3 10 8 4 7 7 
//and yass we got the array rotated to right by 1 position

#include<iostream>
using namespace std;

void rotate(int arr[], int index, int n){
	if(index == n)
		return;
	//now apply the logic of rotate to right by 1 pos
	swap(arr[0], arr[index]);
	rotate(arr, index+1, n);
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
	rotate(arr, 1, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
