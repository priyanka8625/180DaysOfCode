//Smallest Element: Find and print the smallest element in the 2D arrays.

#include<iostream>
using namespace std;

void printArray(int a[50][50], int rows, int cols){
	cout<<"Array-->"<<endl;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}

int main(){
	int rows=0, cols=0, arr[50][50], smallest=INT_MAX, second=INT_MAX;
	cout<<"Enter rows of array: ";
	cin>>rows;
	cout<<"Enter columns of array: ";
	cin>>cols;
	cout<<"Enter elements for array: ";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr[i][j];
			if(smallest > arr[i][j]){
				second = smallest;
				smallest = arr[i][j];
			}
			if(arr[i][j] != smallest && arr[i][j]<second)
				second = arr[i][j];
		}
	}
	
	cout<<"Smallest Element = "<<smallest<<"\nSecond Smallest = "<<second;
	return 0;
}
