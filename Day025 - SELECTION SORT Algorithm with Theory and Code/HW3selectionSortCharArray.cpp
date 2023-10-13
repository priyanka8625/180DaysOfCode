//selection sort HW : Use a Selection Sort Algorithm to sort the array of char in ascending order. 

#include<iostream>

using namespace std;

void printArray(char a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int n=0, min=0;
	char  arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter character "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for rounds from 1 to n-1
	for(int i=0; i<n-1; i++){
		min = i;
		//to find the minimum element in the array to place it in the correct right pos i.e. @ i
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[min])
				min = j;
		}
		//now swap the max ele with it's right position
		swap(arr[i], arr[min]);
	}
	printArray(arr, n);
	return 0;
}
