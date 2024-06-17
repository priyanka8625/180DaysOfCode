//      A B C D
//      A B C
//      A B
//      A


#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	char ch;
	for(int i=1; i<=row; i++){
		ch = 'A';
		for(int j=row; j>=i; j--){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
