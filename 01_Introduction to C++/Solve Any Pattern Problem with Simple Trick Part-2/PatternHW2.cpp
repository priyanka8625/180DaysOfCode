//    A
//    A B
//    A B C
//    A B C D
//    A B C D E

#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			cout<<(char)('A'+(j-1))<<" ";
		}
		cout<<endl;
	}
	return 0;
}
