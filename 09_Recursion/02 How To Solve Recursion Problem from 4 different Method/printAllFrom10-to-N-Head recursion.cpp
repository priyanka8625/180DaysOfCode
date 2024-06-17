//Print all numbers from 10 to n using recursion, where n will be greater than 10.
//approach2: tail recursion =>  s, print(s+1) where s = 10 always

#include<iostream>
using namespace std;

void printFrom10ToN(int s, int e){
	if(s > e)
		return;
	//first processing
	cout<<s<<endl;
	//then, recursive call
	printFrom10ToN(s+1, e);
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	printFrom10ToN(10, n);
	return 0;
}
