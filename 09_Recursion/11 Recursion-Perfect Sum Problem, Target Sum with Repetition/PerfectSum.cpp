//perfect sum
#include<iostream>
using namespace std;

int subsets(int arr[], int index, int sum, int n){
	if(index == n)
		return sum==0;
		
	return subsets(arr, index+1, sum, n) + subsets(arr, index+1, sum-arr[index], n);
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
	cout<<subsets(arr, 0, sum, n);
	return 0;
}
