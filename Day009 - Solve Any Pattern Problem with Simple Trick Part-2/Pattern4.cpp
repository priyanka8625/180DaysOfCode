//a 
//b b
//c c c 
//d d d d d
//e e e e e e


#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			cout<<(char)('a'+(i-1))<<" ";
		}
		cout<<endl;
	}
	return 0;
}

