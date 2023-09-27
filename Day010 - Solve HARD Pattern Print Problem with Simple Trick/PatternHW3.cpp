//    5
//   54
//  543
// 5432
//54321

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
		for(int j=rows; j>=(rows-(i-1)); j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
