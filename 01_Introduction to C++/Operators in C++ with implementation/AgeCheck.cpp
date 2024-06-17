//Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

#include<iostream>
using namespace std;

int main(){
	int age=0;
	cout<<"Enter Your AGE: ";
	cin>>age;
	if(age>=13 && age<=19)
		cout<<"You're a Teenager";
	else
		cout<<"You're not a Teenager";
	return 0;
}
