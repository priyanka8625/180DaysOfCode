#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number (0<=n<=12) :";
	cin>>n;
	if(n==1){
		cout<<"January!";
	}else if(n==2){
		cout<<"February!";
	}else if(n==3){
		cout<<"March!";
	}else if(n==4){
		cout<<"April!";
	}else if(n==5){
		cout<<"May!";
	}else if(n==6){
		cout<<"June!";
	}else if(n==7){
		cout<<"July!";
	}else if(n==8){
		cout<<"August!";
	}else if(n==9){
		cout<<"September!";
	}else if(n==10){
		cout<<"october!";
	}else if(n==11){
		cout<<"November!";
	}else if(n==12){
		cout<<"December!";
	}else{
		cout<<"Please enter number between 1 - 12";
	}
}
