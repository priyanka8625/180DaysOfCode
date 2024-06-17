//insertion sort - cards sort
//the element which are greter than the current element, swap all of them with the current element

#include<iostream>
using namespace std;

void printArray(int a[], int n){
	cout<<"Array elements : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
}

int main(){
	int arr[100],n;
	cout<<"Enter size of array:";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	//for tracting rounds i.e. from 1-(n-1)
	for(int i=1; i<=n-1; i++){
		//compare i'th element with all the left side eles
        for(int j = i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
            	//it means all of the before eles are already sorted
            	break;
			}
        }
    }
	printArray(arr, n);
	
	
	return 0;
}
