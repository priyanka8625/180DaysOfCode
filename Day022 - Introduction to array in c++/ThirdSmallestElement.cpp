//Find the third smallest element in an array of unique elements size n. Where n>3


#include<iostream>
using namespace std;

int main(){
	int arr[100], size, Smallest1=INT_MAX, Smallest2=INT_MAX, Smallest3= INT_MAX;
	cout<<"Enter size of array (size>3): ";
	cin>>size;
	for(int i=0; i<size; i++){
		cout<<"Enter array element "<<i+1<<" : ";
		cin>>arr[i];
		if(arr[i]<Smallest1){
			Smallest3 = Smallest2;
			Smallest2 = Smallest1;
			Smallest1 = arr[i];
		}
		else if(arr[i]<Smallest2 && arr[i]!=Smallest1){
			Smallest3 = Smallest2;
			Smallest2 = arr[i];
		}
		else if(arr[i]<Smallest3 && arr[i]!=Smallest2 && arr[i]!=Smallest1){
			Smallest3 = arr[i];
		}
	}
	cout<<"Third Smallest Element : "<<Smallest3;
	return 0;
}
