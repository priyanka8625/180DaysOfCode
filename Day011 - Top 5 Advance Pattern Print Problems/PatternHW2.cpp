//            1
//          1 2 3
//        1 2 3 4 5
//      1 2 3 4 5 6 7
//    1 2 3 4 5 6 7 8 9


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
		for(int j=1; j<=(i*2)-1; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

