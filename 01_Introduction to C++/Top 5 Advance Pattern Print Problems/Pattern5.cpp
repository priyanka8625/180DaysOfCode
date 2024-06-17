//*             * 
//* *         * *
//* * *     * * *
//* * * * * * * *
//* * *     * * *
//* *         * *
//*             *

#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		for(int sp=1; sp<=(rows*2)-(i*2); sp++){
			cout<<"  ";
		}
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=rows-1; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		for(int sp=1; sp<=(rows*2)-(i*2); sp++){
			cout<<"  ";
		}
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
