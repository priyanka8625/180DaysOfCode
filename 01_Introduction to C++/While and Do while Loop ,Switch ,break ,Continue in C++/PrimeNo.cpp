//Give a number n, find if it is prime or not, use a while loop and break here to solve it


#include<iostream>
using namespace std;

int main(){
	int n=0;
	cout<<"Enter a number:";
	cin>>n;
	int i=2;
	bool flag = true;
	while(i<=(n/2)){
		if(n%i==0)
			flag = false;
			break;
		i++;
	}
	if(flag)
		cout<<"Prime";
	else
		cout<<"Not Prime";
	return 0;
}
