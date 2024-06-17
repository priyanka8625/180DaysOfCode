//Largest Element: Find and print the largest element in the 2D array.


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
	int rows=0, cols=0, arr[50][50], largest=INT_MIN, slarge=INT_MIN;
	cout<<"Enter rows of array: ";
	cin>>rows;
	cout<<"Enter columns of array: ";
	cin>>cols;
	cout<<"Enter elements for array: ";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr[i][j];
			if(largest < arr[i][j]){
				slarge = largest;
				largest = arr[i][j];
			}
			if(arr[i][j] != largest && arr[i][j]>slarge)
				slarge = arr[i][j];
		}
	}
	
	cout<<"Largest Element = "<<largest<<"\nSecond Largest = "<<slarge;
	return 0;
}
