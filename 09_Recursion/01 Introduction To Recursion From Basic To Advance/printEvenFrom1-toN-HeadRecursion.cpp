//Print all numbers from 1 to n using recursion. 

//alternate approach : using head recursion

#include<iostream>
using namespace std;

void printEven(int end){
	if(end == 1)
		return;
	//first, recursive part
	printEven(end-1);
	//then processing part
	if(end % 2 == 0)
		cout<<end<<endl;
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	printEven(n);
	return 0;
}
