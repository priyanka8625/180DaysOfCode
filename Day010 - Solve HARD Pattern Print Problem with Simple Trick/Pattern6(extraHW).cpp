//	      *
//	    * * *
//	  * * * * *
//	* * * * * * * 
//* * * * * * * * *

#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<"Enter number of rows:";
	cin>>rows;
	
	for(int i=1; i<=rows; i++){
//		print the spaces first
		for(int sp=1; sp<=(rows-i); sp++){
			cout<<"  ";
		}
//		then print the first half 
		for(int j=1;j<=i; j++){
			cout<<"* ";
		}
//		then print second half where printing starts from 2nd row
		for(int k=1; k<=(i-1); k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
