//Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.


#include<iostream>
using namespace std;

int main(){
	int a=0,b=0,c=0;
	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;
	if(a>b || a>c)
		cout<<"Yes";
	else
		cout<<"no";
	return 0;
}
