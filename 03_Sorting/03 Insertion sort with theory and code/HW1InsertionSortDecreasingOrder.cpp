//Use Insertion Sort Algorithm to sort the array of integers in decreasing order


#include<iostream>

using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int n=0, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for tracting rounds i.e. from 1-(n-1)
	for(int i=1; i<=n-1; i++){
        for(int j = i; j>0; j--){
            if(arr[j] > arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
            	break;
			}
        }
    }
	printArray(arr, n);
	return 0;
}
