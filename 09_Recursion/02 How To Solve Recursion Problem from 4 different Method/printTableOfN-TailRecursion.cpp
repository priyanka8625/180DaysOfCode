//Write a Table program using recursion. Take input number n, and print its table. 
#include<iostream>
using namespace std;

void printTable(int n, int i){
	if(i==10){
		cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
		return;
	}
	//first process
	cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
	//then recursive call
	printTable(n, i+1);
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	printTable(n, 1);
	return 0;
}
