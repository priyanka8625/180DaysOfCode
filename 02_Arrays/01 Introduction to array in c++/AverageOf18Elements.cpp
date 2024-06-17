//Calculate the average of elements in an array of size 18
#include<iostream>
using namespace std;

int main(){
	int arr[18], sum=0;
	float avg=0;
	for(int i=0; i<18; i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		sum += arr[i];
	}
	avg = sum/18;
	cout<<"Average of elements : "<<avg;
	return 0;
}
