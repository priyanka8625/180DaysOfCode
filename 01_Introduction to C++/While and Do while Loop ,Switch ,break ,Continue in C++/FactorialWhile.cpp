//Find the factorial of a number n using a while loop and do a while loop


#include<iostream>
using namespace std;

int main(){
	int n=0, fact=1;
	cout<<"Enter any number :";
	cin>>n;
	int i=1;
	while(i<=n){
		fact *= i;
		i++;
	}
	cout<<"Factorial : "<<fact;
	return 0;
}
