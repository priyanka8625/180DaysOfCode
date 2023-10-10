//reverse array

#include<iostream>
using namespace std;

int main(){
	int n=0, arr[20];
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	int i=0, j=n-1;
	while(i<j){
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	cout<<"Reversed array --> ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
