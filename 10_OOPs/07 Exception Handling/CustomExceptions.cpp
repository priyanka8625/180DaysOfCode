
#include<iostream>
#include<exception>
using namespace std;

class invalid_amount_error: public runtime_error{
	public:
		invalid_amount_error(const string &msg): runtime_error(msg){
			
		}
};
class insufficient_balance: public runtime_error{
	public:
		insufficient_balance(const string &msg): runtime_error(msg){
			
		}
};

class Customer{
	string name;
	int balance;
	public:
		Customer(string name, int balance){
			this->name = name;
			this->balance = balance;
		}
		void deposit(int amt){
			if(amt <= 0)
				throw invalid_amount_error("Invalid amount Entered!");
			balance += amt;
			cout<<amt<<"Credited!"<<endl;
		}
		void withdraw(int amt){
			if(amt>0 && amt<=balance){
				balance -= amt;
				cout<<amt<<"Debited!"<<endl;
			}else if(amt<0)
				throw invalid_amount_error("Invalid amount Enetered!");
			else
				throw insufficient_balance("Insufficient balance!");
		}
};

int main(){
	try{
		Customer c1("Priyanka", 1000);
		c1.deposit(100);
		c1.withdraw(-6000);
	}catch(const invalid_amount_error &e){
		cout<<"Eception: "<<e.what()<<endl;
	}catch(const insufficient_balance &e){
		cout<<"Eception: "<<e.what()<<endl;
	}catch(const exception &e){//this catch block will handle all the exceptions (child classes of exception)
		cout<<"Exception: "<<e.what()<<endl;
 	}catch(...){//this is default exception block for exceptions which are not handled in program
		cout<<"Default exception!"<<endl;
	}
	return 0;
}
