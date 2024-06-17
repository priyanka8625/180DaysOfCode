//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25

#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++){
			cout<<j*j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
