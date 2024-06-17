//Largest sum of contigous subarray of an array

#include<iostream>
#include<vector>
using namespace std;

int largestSum(vector<int>& arr, int n){
	int Lsum=0;
	for(int i=0; i<n; i++){
		int preffix = 0;
		for(int i=i; i<n; i++){
			preffix += arr[i];
			Lsum = max(preffix, Lsum);
		}
	}
	return Lsum;
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
	cout<<largestSum(arr, n);
	return 0;
}
