//convert octal number into decimal number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int rem, mul= 1, i = 0;
	long long int oct=0, dec=0;
	cout<<"Enter Octal number :";
	cin>>oct;
	while(oct){
		rem = oct%10;
		dec = rem * mul + dec;
		oct/=10;
		mul*=8;
	}
	cout<<"Decimal number : "<<dec;
	return 0;
}
