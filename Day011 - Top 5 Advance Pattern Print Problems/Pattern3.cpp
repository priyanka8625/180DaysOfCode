//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * * 
//        *

#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
//	Approach 1
//	for(int i=1; i<=rows; i++){
//		for(int sp=1; sp<=(i-1); sp++){
//			cout<<"  ";
//		}
//		for(int j=rows; j>=i; j--){
//			cout<<"* ";
//		}
//		for(int k=(rows-1); k>=i; k--){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}

//	Approach 2
	for(int i=rows; i>=1; i--){
		for(int sp=1; sp<=rows-i;sp++){
			cout<<"  ";
		}
		for(int j=1; j<=(2*i-1); j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
