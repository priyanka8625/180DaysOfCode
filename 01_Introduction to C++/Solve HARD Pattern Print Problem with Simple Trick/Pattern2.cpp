//   1
//  22
// 333
//4444

#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<"Enter number of rows:";
	cin>>rows;
	for(int i=1; i<=rows; i++){
		for(int sp=1; sp<=rows-i; sp++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
