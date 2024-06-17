// static data members, if they are private then we can't access them using scope resolution operator outside the class
// hence to acccess the static data members at class level, we can create static member function.
// static member function can access only static data members of the class and not the instance members 
// But the instance members of the class can access the static members and modify them

#include<iostream>
#include<string>
using namespace std;

class Customer{
	string name;
	int acc_num, bal;
	static int total_customers;
	static int total_balance;//total balance of the bank
	
	public:
		Customer(string name, int acc_num, int bal){
			this->name = name;
			this->acc_num = acc_num;
			this->bal = bal;
			this->total_balance += bal;
			this->total_customers++;
		}
		void deposite(int amt){
			if(amt<=0){
				cout<<"Invalid amount"<<endl;
				return;
			}
			this->bal += amt;
			total_balance += amt;
		}
		void withdraw(int amt){
			if(amt<=0){
				cout<<"Invalid amount"<<endl;
				return;
			}
			this->bal -= amt;
			total_balance -= amt;
		}
		void display(){
			cout<<this->name<<" "<<this->acc_num<<" "<<this->bal<<endl;
		}
		static void accessStatic(){
			cout<<"Total Customers of Bank: "<<total_customers<<endl;
			cout<<"Total Balance of Bank: "<<total_balance<<endl;
		}
};

int Customer :: total_customers = 0;
int Customer :: total_balance = 0;

int main(){
	Customer a1("priyanka", 1, 1000);
	Customer a2("shreyash", 2, 2000);
	Customer a3("priyash", 3, 3000);
	a1.display();
	a2.display();
	a3.display();
	Customer::accessStatic();
	a3.deposite(3000);
	a1.withdraw(1000);
	Customer::accessStatic();
	return 0;
}
