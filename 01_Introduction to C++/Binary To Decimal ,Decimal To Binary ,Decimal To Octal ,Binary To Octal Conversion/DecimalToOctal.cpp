//convert decimal number into octal number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int rem, i = 0;
	long long int oct=0, dec=0;
	cout<<"Enter decimal number :";
	cin>>dec;
	while(dec){
		rem = dec%8;
		oct = rem * pow(10,i) + oct;
		dec/=8;
		i++;
	}
	cout<<"Octal number : "<<oct;
	return 0;
}
