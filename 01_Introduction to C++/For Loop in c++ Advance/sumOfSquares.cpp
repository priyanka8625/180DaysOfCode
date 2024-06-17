#include<iostream>
using namespace std;

int main(){
	int sum=0,n=0;
	cout<<"Enter any integer : ";
	cin>>n;
	for(int i=1; i<=n; i++){
		sum += (i*i);
	}
	cout<<"Sum of all the squares of 1 - "<<n<<" : "<<sum<<endl;
	
	
	return 0;
}
