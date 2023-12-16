//Find the Number of even elements in a given array of size N

#include<iostream>
using namespace std;

int countEven(int arr[], int index, int n){
	if(index == n)//index==n means array has been ended
		return 0;
	if(arr[index]%2 == 0)
		return 1 + countEven(arr, index+1, n);
	else
		return 0 + countEven(arr, index+1, n);
}


int main(){
	int n=0, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	cout<<countEven
	(arr, 0, n);
	return 0;
}
