//maximum difference between 2 elements in an array:
//Given an array arr[] of integers such that larger element appears after the smaller element


#include<iostream>
#include<vector>
using namespace std;

int maxDifference(vector<int>& arr, int n){
	int maxDiff=0, suffixMax=INT_MIN;
	for(int i=n-2; i>=0; i--){
		suffixMax = max(suffixMax, arr[i+1]);//take the max element before the current element in array
		int diff = suffixMax - arr[i];//subtract max of array before that element from the current element 
		maxDiff = max(maxDiff, diff);//and then take the maximum of the previous differences and current difference
	}
	return maxDiff;
}

int main(){
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<maxDifference(arr, n);
	return 0;
}
