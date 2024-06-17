#include<iostream>
using namespace std;

bool find(int arr[], int index, int n, int target){
	if(target == 0)
		return 1;
	if(index == n || target<0)
		return 0;
	//don't include and include index value to check if the target becomes zero after adding a particular subset into it 
	//if target becomes zero then it's clear that subset and target are equal hence we can say that target is present in one of the subsets of array
	//and return the value between the two choices 0 or 1 => 1
	return find(arr, index+1, n, target) || find(arr, index+1, n, target - arr[index]);
}

int main(){
	int arr[100], n, target=0;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array elemnts: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter target: ";
	cin>>target;
	cout<<find(arr, 0, n, target);
	return 0;
}
