//Write a Table program using recursion. Take input number n, and print its table. 
#include<iostream>
using namespace std;

void printTable(int n, int i){
	if(i==1){
		cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
		return;
	}
	//first recursive call
	printTable(n, i-1);
	//then process
	cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	printTable(n, 10);
	return 0;
}
