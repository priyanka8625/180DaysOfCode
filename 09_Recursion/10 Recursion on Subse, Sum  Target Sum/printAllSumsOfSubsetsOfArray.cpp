#include<iostream>
using namespace std;

void printSubsets(int arr[], int index, int n, int sum){
	if(index == n){
		cout<<sum<<endl;
		return;
	}
	//don't include
	printSubsets(arr, index+1, n, sum);
	//include
	printSubsets(arr, index+1, n, sum+arr[index]);
}

int main(){
	int arr[100], n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array elemnts: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	printSubsets(arr, 0, n, 0);
	return 0;
}
