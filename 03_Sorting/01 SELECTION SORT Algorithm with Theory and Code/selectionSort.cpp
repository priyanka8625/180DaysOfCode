//selection sort 

#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int n=0, arr[100], min=0;
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for rounds from 1 to n-1
	for(int i=0; i<n-1; i++){
		min = i;
		//to find the minimum element in the array to place it in the right pos
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[min])
				min = j;
		}
		//now swap the min ele with it's right position
		swap(arr[i], arr[min]);
	}
	printArray(arr, n);
	return 0;
}
