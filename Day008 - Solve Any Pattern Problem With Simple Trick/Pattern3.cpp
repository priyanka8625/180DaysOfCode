//10 10 10 10
//10 10 10 10
//10 10 10 10

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
			cout<<"10 ";
		}
		cout<<endl;
	}
	return 0;
}
