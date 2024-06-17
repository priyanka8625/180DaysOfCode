//bubble sort 

#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int rows=0, cols=0, arr[50][50], x=-1;
	cout<<"Enter rows of array: ";
	cin>>rows;
	cout<<"Enter columns of array: ";
	cin>>cols;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<"Enter element "<<i+1<<": ";
			cin>>arr[i][j];	
		}
	}
	cout<<"Enter element to be searched: ";
	cin>>x;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			if(arr[i][j] == x){
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}
