//Take 20 elements from user input and find its sum with the help of an array
#include<iostream>
using namespace std;

int main(){
	int arr[100], size, sum=0;
	cout<<"Enter size : ";
	cin>>size;
	for(int i=0; i<size; i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		sum += arr[i];
	}
	cout<<"Sum of elements : "<<sum;
	return 0;
}
