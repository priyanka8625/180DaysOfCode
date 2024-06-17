//5 4 3 2 1
//5 4 3 2 
//5 4 3 
//5 4 
//5
#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	//approach1
	for(int i=5; i>=1; i--){
		for(int j=5; j>=i; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	//approach2
	for(int i=1; i<=row; i++){
		for(int j=5; j>=row-(i-1); j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
