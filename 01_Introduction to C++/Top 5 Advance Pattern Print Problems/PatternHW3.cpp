//            A
//          A B A
//        A B C B A
//      A B C D C B A
//    A B C D E D C B A


#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<"Enter number of rows:";
	cin>>rows;
	
	for(int i=1; i<=rows; i++){
		for(int sp=1; sp<=(rows-i); sp++){
			cout<<"  ";
		}
		for(int j=1; j<=i; j++){
			cout<<(char)('A'+(j-1))<<" ";
		}
		for(int k=i-1; k>=1; k--){
			cout<<(char)('A'+(k-1))<<" ";
		}
		cout<<endl;
	}
}

