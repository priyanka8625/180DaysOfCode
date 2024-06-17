//    *
//   ***
//  *****
// *******
//*********

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of rows:";
	cin>>n;
	
	for(int i=1; i<=n;i++){
		for(int sp=1; sp<=(n-i); sp++){
			cout<<"  ";
		}
		for(int j=1; j<=((i*2)-1); j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
