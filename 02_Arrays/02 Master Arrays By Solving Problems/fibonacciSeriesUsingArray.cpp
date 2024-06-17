//fibonacci using array

#include<iostream>
using namespace std;

int main(){
	int n=0, arr[20] = {0,1};
	cout<<"Enter size of array: ";
	cin>>n;
	
	for(int i=2; i<n; i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	cout<<"-> "<<arr[n-1];
	return 0;
}
