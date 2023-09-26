//       10
//       10 11
//       10 11 12
//       10 11 12 13
//       10 11 12 13 14
//       10 11 12 13 14 15


#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			cout<<(10+(j-1))<<" ";
		}
		cout<<endl;
	}
	return 0;
}
