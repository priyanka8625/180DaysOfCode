//convert binary number into Octal number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int rem, mul= 1, i = 0;
	long long int bin=0, oct=0, dec=0;
	cout<<"Enter Binary number :";
	cin>>bin;
//	find the bin-> dec conversion
	while(bin){
		rem = bin%10;
		dec = rem * pow(2,i) + dec;
		bin/=10;
		i++;
	}
	
//	now find dec -> oct conversion
	while(dec){
		rem = dec%8;
		oct = rem * mul + oct;
		mul *= 10;
		dec /= 8;
	}
	cout<<"Octal number : "<<oct;
	return 0;
}
