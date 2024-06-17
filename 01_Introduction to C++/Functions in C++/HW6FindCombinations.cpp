//Given two numbers n, r. Find nCr (Combination). Use Function here.

//formula - n!/r!*(n-r)!

#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0)
		return 0;
		
	int fact = 1;
	for(int i=1; i<=n;i++){
		fact *= i;
	}
	return fact;
}

long nCr(int n, int r){
	long ncr = 0;
	ncr = (factorial(n))/(factorial(r)*factorial(n-r));
	return ncr;
}

int main(){
	int n,r;
	cout<<"Enter values of n and r:";
	cin>>n>>r;
	cout<<"Combinations : "<<nCr(n,r);
	return 0;
}
