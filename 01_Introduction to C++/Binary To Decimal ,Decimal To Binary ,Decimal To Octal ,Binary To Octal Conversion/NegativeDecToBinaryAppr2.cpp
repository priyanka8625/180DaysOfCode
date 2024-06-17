//convert negative decimal to binary number 
//Approach 2

#include<iostream>
using namespace std;

int main(){
	int dec, bin[32], bit;
	
	cout<<"Enter Negative Decimal number :";
	cin>>dec;
	int i=31;
	while(dec &&(i>=0)){
		bit = dec&1;
		bin[i] = bit;
		dec>>=1;
		i--;
	}
	cout<<"Binary number : ";
	for(int i=0;i<=31; i++){
		cout<<bin[i];
	}
	return 0;
}
