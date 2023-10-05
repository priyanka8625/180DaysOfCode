//There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.


#include<iostream>
using namespace std;

void changeValues(int& a, int& b, int& c){
	int anew = a, bnew=b, cnew=c;
	a = bnew;
	b = cnew;
	c = anew;
}

int main(){
	int a, b, c;
	cout<<"Enter any 3 number : ";
	cin>>a>>b>>c;
	changeValues(a, b, c);
	cout<<"New Value of a,b,c are-\n a="<<a<<"  b="<<b<<"  c="<<c;
	return 0;
}
