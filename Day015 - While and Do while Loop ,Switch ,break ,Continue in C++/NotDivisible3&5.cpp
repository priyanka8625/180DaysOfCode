//Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here)

#include<iostream>
using namespace std;

int main(){
	int n=0, fact=1;
	cout<<"Enter any number :";
	cin>>n;
	int i=0;
	while(i<n){
		i++;
		if(i==3 or i==5)
			continue;
		
		cout<<i<<" ";
	}
	return 0;
}
