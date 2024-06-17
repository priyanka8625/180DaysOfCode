#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter any integer :";
	cin>>n;
	int i=1;
	while(i<=n){
		if(i%4 == 0)
			cout<<i<<"\n";
		i++;
	}
	return 0;
}
