#include<iostream>
using namespace std;

int main(){
	int rows=0, cols=0, arr1[50][50], first=0, second=0;
	cout<<"Enter rows of array: ";
	cin>>rows;
	cout<<"Enter columns of array: ";
	cin>>cols;
	cout<<"Enter elements for first array1: ";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr1[i][j];	
		}
	}
	cout<<"First Diagonal -->\n";
	for(int i=0; i<rows; i++){
		cout<<arr[i][j]<<" ";
		first += arr[i][i];
	}
	cout<<"Sum => "<<first;
	cout<<"Second Diagonal -->\n";
	int i=0, j=n-1;
	while(i<n && j>=0){
		cout<<arr[i][j]<<" ";
		second += arr[i][j];
		i++;
		j--;
	}
	cout<<"Sum => "<<second;
	
	return 0;
}
