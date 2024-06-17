//scope of variables

#include<iostream>
using namespace std;

int main(){
//	cout<<n; throws an error as 'n' not defined
	int n=10;
	cout<<n<<endl;
	int i=30;
	if (i==30){
		int n=11;
		cout<<n<<endl;      //prints new variable n
	}
	
//	prints the outer variable named n
	cout<<n<<endl;
	
//	same variables with same name in the same block isn't allowed
//	int n=10;
	return 0;
}
