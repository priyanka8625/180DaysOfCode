//    1
//   21
//  321
// 4321
//54321

#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter number of rows:";
	cin>>row;
	for (int i=1; i<=row; i++){
		for(int sp=1; sp<=(row-i);sp++){
			cout<<" ";
		}
		for(int j=i; j>=1; j--){
			cout<<j<<"";
		}
		cout<<endl;
	}
	return 0;
}
