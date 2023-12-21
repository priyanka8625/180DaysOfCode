//perfect sum
#include<iostream>
using namespace std;

int subsum(int arr[], int index, int sum, int n){
	if(sum == 0)
		return 1;
	if(index == n || sum<0)
		return 0;
		
	return subsum(arr, index+1, sum, n) + subsum(arr, index, sum-arr[index], n);
}

int main(){
	int arr[100], n, sum=0;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array elemnts: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter target: ";
	cin>>sum;
	cout<<subsum(arr, 0, sum, n);
	return 0;
}
