//convert Negative Decimal number into Binary number 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int i = 32, dec=0, bit=0;
	int Comp1[32];
	int bin[32];
	
//	inialize both arrays with 1 first
	for(int i=0; i<=31; i++){
		Comp1[i]=1;
		bin[i]=1;
	}
	
	cout<<"Enter Negative Decimal number :";
	cin>>dec;
	dec = abs(dec);
	i=31;
//	find the dec -> bin conversion
	while(dec){
		bit = dec&1;          //take last bit 	
		//take 1's complement of each bit add it to Comp1
		Comp1[i] = !bit;
		//and store it in bin as well
		bin[i] = Comp1[i];
		i--;
		dec>>=1;
	}
//	now take 2's complement and store in bin array
	int carry=1;
	i=31;
	while(carry && (i>=0)){
		bin[i] = Comp1[i]^1;
		carry = Comp1[i];
		i--;
	}
	cout<<"1's complement : "<<endl;
	for(int i=0; i<=31; i++){
		cout<<Comp1[i]<<" ";
	}
	cout<<"\nBinary number : "<<endl;
	for(int i=0; i<=31; i++){
		cout<<bin[i]<<" ";
	}
	return 0;
}
