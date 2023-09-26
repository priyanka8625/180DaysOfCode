#include<iostream>
using namespace std;


int main(){
	int n=0;
	cout<<"Enter number to print n'th fibonnaci number:";
	cin>>n;
	int n1=0, n2 =1, fibbo = 0;
	if(n == 1){
		cout<<n1;
		return 0;
	}
	if(n == 2){
		cout<<n2;
		return 0;
	}
	for(int i=3; i<=n; i++){
		fibbo = n1 + n2;
		n1 = n2;
		n2 = fibbo;
	}
	cout<<fibbo;
	return 0;
}
