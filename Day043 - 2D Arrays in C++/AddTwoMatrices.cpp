//bubble sort 

#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int rows=0, cols=0, arr1[50][50], arr2[50][50];
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
	cout<<"Enter elements for second array2: ";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr2[i][j];	
		}
	}
	cout<<"ADDITION: \n";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
