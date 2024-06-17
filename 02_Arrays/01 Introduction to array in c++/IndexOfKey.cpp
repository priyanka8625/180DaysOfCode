//Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it

#include<iostream>
using namespace std;

int main(){
	int arr[100], size, key=-1;
	cout<<"Enter size of array: ";
	cin>>size;
	for(int i=0; i<size; i++){
		cout<<"Enter array element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Enter element to be searched : ";
	cin>>key;
	int index=-1;
	for(int i=0; i<size; i++)
		if(arr[i]==key){
			index = i;
			break;
		}
	cout<<"Index of "<<key<<" : "<<index;
	return 0;
}
