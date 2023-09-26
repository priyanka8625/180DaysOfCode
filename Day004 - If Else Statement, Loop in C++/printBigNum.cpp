#include<iostream>
using namespace std;

int main(){
	int n1, n2;
	cout<<"Enter two inequal numbers :";
	cin>>n1>>n2;
	if(n1==n2){
		cout<<"Please Enter inequal numbers!";
	}else{
		cout<<"Greater : "<<((n1>n2)?n1:n2);
	}
}
