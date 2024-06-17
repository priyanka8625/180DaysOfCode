//   A
//  AB
// ABC
//ABCD

#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	
	for(int i=1; i<=rows; i++){
		for(int sp=1; sp<=(rows-i); sp++){
			cout<<"  ";
		}
//		approach2
		for(char ch='A'; ch<='A'+(i-1); ch++){
			cout<<ch<<" ";
		}
		//approach1
//		for(int j=1; j<=i; j++){
//			cout<<(char)('A'+(j-1))<<" ";
//		}
	cout<<endl;
	}
	return 0;
}
