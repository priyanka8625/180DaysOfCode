//        1 
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	
	for(int i=1; i<=rows; i++){
		for(int sp=1; sp<=(rows-i); sp++){
			cout<<"  ";
		}
		// first half
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		//second half
		for(int k=i-1; k>=1; k--){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
