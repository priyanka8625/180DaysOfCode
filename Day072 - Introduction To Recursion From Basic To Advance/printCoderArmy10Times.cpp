//Print “Coder Army” 10 times using recursion 
#include<iostream>
using namespace std;

void printCoderArmy(int n){
	if(n == 0)
		return;
	cout<<"CoderArmy\n";
	printCoderArmy(n-1);
}

int main(){
	printCoderArmy(10);
	return 0;
}
