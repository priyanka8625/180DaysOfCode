//a b c d e
//a b c d e
//a b c d e
//a b c d e
//a b c d e

#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
	char ch = 'a';
	for(int i=1; i<=row; i++){
		ch = 'a';
		for(int j=1; j<=col; j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
