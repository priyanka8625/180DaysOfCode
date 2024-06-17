//reverse each row of matrix
#include<iostream>
using namespace std;

void printArray(int a[50][50], int rows, int cols){
	cout<<"Reverse Array-->"<<endl;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}

int main(){
	int rows=0, cols=0, arr[50][50];
	cout<<"Enter rows of array: ";
	cin>>rows;
	cout<<"Enter columns of array: ";
	cin>>cols;
	cout<<"Enter elements for first array1: ";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr[i][j];	
		}
	}
	for(int i=0; i<rows; i++){
		int start=0, end=cols-1;
		while(start<end){
			swap(arr[i][start], arr[i][end]);
			start++;
			end--;
		}
	}
	printArray(arr, rows, cols);
	return 0;
}
