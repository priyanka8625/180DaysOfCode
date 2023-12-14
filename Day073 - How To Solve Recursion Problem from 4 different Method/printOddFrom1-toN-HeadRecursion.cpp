//Print all odd numbers from 1 to n using recursion.

//alternate approach : using head recursion

#include<iostream>
using namespace std;

void printOdd(int end){
	if(end < 1)
		return;
	//first, recursive part
	printOdd(end-2);
	//then processing part
	cout<<end<<endl;
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	if(n %2 == 0)//if even no
		n--;//convert it to odd
	printOdd(n);
	return 0;
}
