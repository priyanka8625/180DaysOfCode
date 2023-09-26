//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
	for(int i=1; i<=row; i++){
		for(int j=col; j>=1; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
