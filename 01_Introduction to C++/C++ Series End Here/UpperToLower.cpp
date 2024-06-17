#include<iostream>
using namespace std;

char toupper(char lower){
	return lower-32;
}

int main(){
	char lower, upper;
	cout<<"Enter lower case letter : ";
	cin>>lower;
	upper = toupper(lower);
	cout<<"Upper case letter : "<<upper;
	return 0;
}
