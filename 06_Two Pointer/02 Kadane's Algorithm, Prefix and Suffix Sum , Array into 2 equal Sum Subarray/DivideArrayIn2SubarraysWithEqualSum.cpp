//divide array in 2 subarrays with EQUAL sum

//prefix sum of an array

#include<iostream>
using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}
int totalSum(int *arr, int n){
	int sum=0;
	for(int i=0;i<n; i++)
		sum += arr[i];
	return sum;
}
bool divide(int *arr, int n){
	int total = totalSum(arr, n);
	int preffix=0, rightPart=0;
	for(int i=0;i<n; i++){
		preffix += arr[i]; //calculate left subpart sum at each index in each iteration respectively
		rightPart = total - preffix;
		if(preffix == rightPart)
			return 1;
	}
	return 0;
}
int main(){
	int arr[100],n;
	cout<<"Enter size of array:";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<divide(arr, n);
	return 0;
}
