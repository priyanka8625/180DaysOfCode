//prefix sum of an array

#include<iostream>
using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}
void preffixSum(int *arr, int n){
	for(int i=1;i<n; i++)
		arr[i] = arr[i-1] + arr[i];
}
int main(){
	int arr[100],n;
	cout<<"Enter size of array:";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	preffixSum(arr, n);
	cout<<"Preffix sum of array: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
