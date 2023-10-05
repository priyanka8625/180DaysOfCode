//Print “Hello Coder Army” n times using Function


#include<iostream>
using namespace std;

void print(int& n, string& msg){
	for(int i=1; i<=n; i++)
		cout<<msg<<endl;
}

int main(){
	int n;
	string msg = "Hello Coder Army!";
//	cout<<"Enter any message to be printed : ";
//	cin>>msg;
	cout<<"Enter no. of times to be printed : ";
	cin>>n;
	print(n, msg);
	return 0;
}
