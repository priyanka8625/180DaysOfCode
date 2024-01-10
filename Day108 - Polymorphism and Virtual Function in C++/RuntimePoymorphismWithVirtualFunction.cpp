//runtime polymorphism with Virtual Function
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
};

int main(){
	Animal *p;
	p = new Dog();
	p->speak();
	return 0;
}
