//Find the second largest element in an array of unique elements of size n. Where n>3


#include<iostream>
using namespace std;

int main(){
	int arr[100], size, ans=INT_MIN, max=INT_MIN;
	cout<<"Enter size of array (size>3): ";
	cin>>size;
	for(int i=0; i<size; i++){
		cout<<"Enter array element "<<i+1<<" : ";
		cin>>arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
	}
	for(int i=0; i<size; i++){
		if(arr[i]>ans && arr[i]<max){
			ans = arr[i];
		}
	}
	cout<<"Second Largest Element : "<<ans;
	return 0;
}
