//12345
//1234
//123
//12
//1
#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row-(i-1); j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	//approach 2
	for(int i=row; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
