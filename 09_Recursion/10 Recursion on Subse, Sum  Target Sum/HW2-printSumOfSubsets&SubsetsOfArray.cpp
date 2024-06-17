//Given an array of size N, Print subset sum and corresponding to it, print the given subset also.
//Ex: arr[1,2]
//output:
//Sum Subset
//1        1
//2        2
//3       1 2


#include<iostream>
#include<vector>
using namespace std;

void printSubsets(int arr[], int index, int n, int sum, vector<int> &subset){
	if(index == n){
		//print sum
		cout<<sum<<"\t";
		//print the subset
		for(int i=0; i<subset.size(); i++)
			cout<<subset[i]<<" ";
		cout<<endl;
		return;
	}
	//don't include
	printSubsets(arr, index+1, n, sum, subset);
	//include
	subset.push_back(arr[index]);
	printSubsets(arr, index+1, n, sum+arr[index], subset);
	subset.pop_back();//backtrack
}

int main(){
	int arr[100], n;
	vector<int> subset;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array elemnts: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"SUM\t SUBSET"<<endl;
	printSubsets(arr, 0, n, 0, subset);
	return 0;
}
