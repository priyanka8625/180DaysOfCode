//      * 
//     * *
//	  * * *
//	 * * * *
// 	 * * * *
//	  * * *
// 	   * *
//      *

#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	for(int i=1; i<=rows; i++){
		for(int sp=1; sp<=rows-i; sp++){
			cout<<"  ";
		}
		for(int j=1; j<=i; j++){
			cout<<"*   ";
		}
		cout<<endl;
	}
	for(int i=rows; i>=1; i--){
		for(int sp=1; sp<=rows-i; sp++){
			cout<<"  ";
		}
		for(int j=1; j<=i; j++){
			cout<<"*   ";
		}
		cout<<endl;
	}
	return 0;
}
