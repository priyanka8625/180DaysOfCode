//bubble sort 

#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int rows=0, cols=0, arr1[50][50], maxSum=INT_MIN, index;
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
	for(int i=0; i<rows; i++){
		int sum=0;
		for(int j=0; j<cols; j++){
			sum += arr1[i][j];
		}
		if(maxSum<sum){
			maxSum = sum;
			index = i;
		}
	}
	cout<<"Row with Max sum is: "<<index<<"'th row \nand it's sum is : "<<maxSum;
	return 0;
}
