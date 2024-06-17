//convert Octal number into Binary number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int rem, mul= 1, i = 0;
	long long int bin=0, oct=0, dec=0;
	cout<<"Enter Octal number :";
	cin>>oct;
//	find the oct-> dec conversion
	while(oct){
		rem = oct%10;
		dec = rem * pow(8,i) + dec;
		oct/=10;
		i++;
	}
	
//	now find dec -> bin conversion
	while(dec){
		rem = dec&1;
		bin = rem * mul + bin;
		dec >>= 1;
		mul *= 10;
	}
	cout<<"Binary number : "<<bin;
	return 0;
}
