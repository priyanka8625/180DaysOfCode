//Given a number n, print the corresponding month of it. 
//For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
#include<iostream>
using namespace std;

int main(){
	int n=0;
	cout<<"Enter any number between 1-12 :";
	cin>>n;
	switch(n){
		case 1: cout<<"January";
		break;
		case 2: cout<<"February";
		break;
		case 3: cout<<"March";
		break;
		case 4: cout<<"April";
		break;
		case 5: cout<<"May";
		break;
		case 6: cout<<"June";
		break;
		case 7: cout<<"July";
		break;
		case 8: cout<<"August";
		break;
		case 9: cout<<"September";
		break;
		case 10: cout<<"October";
		break;
		case 11: cout<<"November";
		break;
		case 12: cout<<"December";
		break;	
		default:
			cout<<"WRONG NUMBER!!!";
	}
	return 0;
}
