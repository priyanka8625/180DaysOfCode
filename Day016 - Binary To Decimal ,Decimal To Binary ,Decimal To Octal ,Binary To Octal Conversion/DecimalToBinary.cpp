//convert decimal number into binary number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num, rem, mul= 1, i = 0;
	long long int bin=0;
	cout<<"Enter decimal number :";
	cin>>num;
	while(num){
		rem = num&1;
		bin = rem * mul + bin;
//		bin = rem * pow(10, i) + bin;
		num>>=1;
		mul *= 10;
//		i++;
	}
	
	cout<<"Binary number : "<<bin;
	return 0;
}
