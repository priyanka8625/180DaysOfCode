//convert binary number into decimal number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int rem, mul= 1, i = 0;
	long long int bin=0, dec=0;
	cout<<"Enter Binary number :";
	cin>>bin;
	while(bin){
		rem = bin%10;
		dec = rem * pow(2,i) + dec;
		bin/=10;
		i++;
	}
	cout<<"Decimal number : "<<dec;
	return 0;
}
