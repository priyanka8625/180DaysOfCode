//find the number is prime or not

#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n<2)
		return 0;
		
	for(int i=2; i<=(n/2); i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	int n=0;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"is "<<n<<" Prime? -->> "<<isPrime(n);
	return 0;
}
