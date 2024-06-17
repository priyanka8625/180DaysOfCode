#include<iostream>
#include<string>
using namespace std;

class Customer{
	string name;
	int acc_num, bal;
	static int total_customers;
	
	public:
		static int access_me;//created to show just how to access if static is public
		Customer(string name, int acc_num, int bal){
			this->name = name;
			this->acc_num = acc_num;
			this->bal = bal;
			this->total_customers++;
		}
		void display(){
			cout<<this->name<<" "<<this->acc_num<<" "<<this->bal<<" "<<total_customers<<endl;
		}
};

int Customer :: total_customers = 0;
int Customer :: access_me = 100;

int main(){
	Customer a1("priyanka", 1, 1000);
	Customer a2("shreyash", 2, 2000);
	a1.display();
	a2.display();
	Customer a3("priyash", 3, 3000);
	a3.display();
	a1.display();
	cout<<"Static data: "<<Customer::access_me;
	return 0;
}
