//* * * * * * * *
//* * *     * * *
//* *         * *
//*             *
//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *

#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	for(int i=rows; i>=1; i--){
		for(int j=i; j>=1; j--){
			cout<<"* ";
		}
		for(int sp=1; sp<=(rows*2)-(i*2); sp++){
			cout<<"  ";
		}
		for(int k=i; k>=1; k--){
			cout<<"* ";
		}
		cout<<endl;
	}
//	second half
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
//		i*2 = no of stars to be printed
//		hence, row*2 is the total no of chars to be printed in the pattern including stars and spaces
//		therefore, (row*2)-(i*2) will be the count of spaces, chars remained after printing all the stars
		for(int sp=1; sp<=(rows*2)-(i*2); sp++){
			cout<<"  ";
		}
		for(int k=1; k<=i; k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
