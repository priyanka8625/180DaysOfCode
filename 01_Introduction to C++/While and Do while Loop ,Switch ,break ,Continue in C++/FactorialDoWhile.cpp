//Find the factorial of a number n using a while loop and do a while loop


#include<iostream>
using namespace std;

int main(){
	int n=0, fact=1;
	cout<<"Enter any number :";
	cin>>n;
	int i=1;
	do{
		fact *= i;
		i++;
	}while(i<=n);
	cout<<"Factorial : "<<fact;
	return 0;
}
