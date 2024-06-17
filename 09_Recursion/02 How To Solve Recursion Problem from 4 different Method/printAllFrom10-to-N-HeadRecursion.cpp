//Print all numbers from 10 to n using recursion, where n will be greater than 10.
//approach1: head recursion => print(n-1), n 

#include<iostream>
using namespace std;

void printFrom10ToN(int n){
	if(n < 10)
		return;
	//first recursive call
	printFrom10ToN(n-1);
	//then, print n
	cout<<n<<endl;
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	printFrom10ToN(n);
	return 0;
}
