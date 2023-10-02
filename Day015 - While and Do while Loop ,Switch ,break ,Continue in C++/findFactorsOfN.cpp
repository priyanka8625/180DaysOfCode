//do while loop
//find factors of n
#include<iostream>
using namespace std;

int main(){
	int n=0;
	cout<<"Enter any number:";
	cin>>n;
	int i=1;
	do{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}while(i<=n);
	return 0;
}
