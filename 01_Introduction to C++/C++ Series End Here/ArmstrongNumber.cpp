#include<iostream>
#include<cmath>

using namespace std;

int countDigits(int n){
	int count=0;
	while(n){
		n/=10;
		count++;
	}
	return count;
}

bool isArmstrong(int n, int count){
	int temp=n, digit=0, res=0;
	while(temp){
		digit = temp%10;
		res += pow(digit, count);
		temp/=10;
	}
	if(res==n)
		return 1;
	return 0;
}

int main(){
	int n;
	cout<<"Enter any int number : ";
	cin>>n;
	int count = countDigits(n);
	if(isArmstrong(n, count))
		cout<<"It's an armstrong number!";
	else
		cout<<"It's not an armstrong number!";
	return 0;
}
