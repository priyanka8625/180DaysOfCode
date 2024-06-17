//* * * * *
//* * * *
//* * *
//* *
//*
#include<iostream>
using namespace std;
// My approach
//int main(){
//	int row;
//	cout<<"Enter number of rows:";
//	cin>>row;
//	for(int i=1; i<=row; i++){
//		for(int j=row; j>=i; j--){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//2nd approach
// use j=1 to (row-(i-1)) in order to print the pattern
// that means for row 1 it'll be ==> j=1 to 5-1-0=5
int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row-(i-1); j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
