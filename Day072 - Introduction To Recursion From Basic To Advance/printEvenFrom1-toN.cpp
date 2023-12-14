//Print all numbers from 1 to n using recursion. 

#include<iostream>
using namespace std;

void printEven(int start, int end){
	if(start > end)//start>n: base condition
		return;
	if(start % 2 == 0)
		cout<<start<<endl;
	printEven(start+1, end);
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	printEven(1, n);
	return 0;
}
