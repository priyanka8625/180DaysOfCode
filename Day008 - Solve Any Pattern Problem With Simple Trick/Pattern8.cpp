//a a a a a
//b b b b b
//c c c c c
//d d d d d
//e e e e e

#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
	char ch = 'a';
	char print = ' ';
	for(int i=1; i<=row; i++){
		print = ch + (i-1);
		for(int j=1; j<=col; j++){
			cout<<print<<" ";
//			cout<<ch<<" ";
		}
		cout<<endl;
		//ch++;
	}
	return 0;
}
