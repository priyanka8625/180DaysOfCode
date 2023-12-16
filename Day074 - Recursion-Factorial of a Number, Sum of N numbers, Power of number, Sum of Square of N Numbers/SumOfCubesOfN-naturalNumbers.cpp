//Sum of cubes of N natural numbers using Recursion
#include<iostream>
using namespace std;

int cubeSum(int n){
	if(n==1)
		return 1;
	return (n*n*n) + cubeSum(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<cubeSum(n);
	return 0;
}
