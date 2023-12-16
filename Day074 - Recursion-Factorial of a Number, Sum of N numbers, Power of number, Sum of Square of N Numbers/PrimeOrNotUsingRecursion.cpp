//Given a Number N, check whether it is prime or not using Recursion

#include<iostream>
using namespace std;

bool isPrime(int n, int divisor){
	if(divisor==1 || divisor == 0)//divisor will be zero for n=1 when function is called through main()
		return 1;
	//if n is divisible by divisor, then we'll check n against divisor-1 upto divisor becomes 1
	//else return false 
	return (n%divisor == 0)? false:isPrime(n, divisor-1);
}

int main(){
	int n;
	cin>>n;
	cout<<isPrime(n, n-1);
	return 0;
}
