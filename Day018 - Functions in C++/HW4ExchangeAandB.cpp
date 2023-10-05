//Swap 2 numbers a, b without using extra variables. Range of 
//-10000<=a,b<=100000


#include<iostream>
using namespace std;

void changeValues(long& a, long& b){
	a = (a+b);  //sum of a and b
	b = a-b;    // a+b-b = a
	a = a-b;    // a+b-a = b
}

int main(){
	long a, b;
	cout<<"Enter any 2 number : ";
	cin>>a>>b;
	changeValues(a, b);
	cout<<"New Value of a,b are-\n a="<<a<<"  b="<<b;
	return 0;
}
