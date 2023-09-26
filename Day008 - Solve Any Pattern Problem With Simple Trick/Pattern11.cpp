//4 4 4 4 4
//4 4 4 4 4
//4 4 4 4 4
//4 4 4 4 4

#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
	int count = 4;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++){
			cout<<count<<" ";
		}
		cout<<endl;
	}
	return 0;
}
