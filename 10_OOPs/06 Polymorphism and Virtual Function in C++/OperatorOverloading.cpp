//compile time polymorphism -> Operator Overloading 
#include<iostream>
using namespace std;

class Complex{
	int real, img;
	public:
		Complex(){
			this->real = 0;
			this->img = 0;			
		}
		Complex(int real, int img){
			this->real = real;
			this->img = img;
		}
		void display(){
			cout<<this->real<<" + i"<<this->img<<endl;
		}
		//operator overloading
		Complex operator +(Complex &c){
			Complex ans;
			ans.real = this->real + c.real;
			ans.img = this->img + c.img;
			return ans;
		}
};

int main(){
	Complex c1(1,2), c2(3,4);
	Complex c3 = c1 + c2; //this syntax will call the operator overloaded function and c1 the LHS operand will call the function whereas RHS operand will be passed as the parameter
	c3.display();
	return 0;
}

