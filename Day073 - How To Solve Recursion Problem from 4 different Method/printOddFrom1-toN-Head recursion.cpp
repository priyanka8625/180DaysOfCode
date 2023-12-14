//Print all odd numbers from 1 to n using recursion.


//approach1 : using head recursion

#include<iostream>
using namespace std;

void printOdd(int start, int end){
	if(start>end)
		return;
	//first processing part
	cout<<start<<endl;
	//then, recursive part
	printOdd(start+2, end);
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	if(n %2 == 0)
		n--;
	printOdd(1, n);
	return 0;
}
