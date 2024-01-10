//runtime polymorphism -> this program demonstrates that at compile time it is decided which function to be called at run time 
#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void speak(){
			cout<<"Hu Hu"<<endl;
		}
};
class Dog : public Animal{
	public:
		void speak(){
			cout<<"Bark"<<endl;
		}
		void roti(){
			cout<<"Roti"<<endl;
		}
};

int main(){
	Animal *p;
	p = new Dog();
	p->roti();
	return 0;
}
