//Reverse a number n using Function, Constraints: -5000<=n<=5000

#include<iostream>
using namespace std;

int reverse(int n){
	int rem=0, rev=0;
	while(n){
		rem = n%10;
		rev = rev*10 + rem;
		n/=10;
	}
	return rev;
}

int main(){
	int n=0;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"reverse of "<<n<<" -->> "<<reverse(n);
	return 0;
}
