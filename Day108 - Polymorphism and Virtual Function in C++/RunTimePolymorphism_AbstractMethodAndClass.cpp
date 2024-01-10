//abstract classes in c++
//there's no abstract keyword present in c++ as like Java
//but still we can create templates of some real time systems with the help of abstract classes in c++ as well
//the way to create abstract classes is, defining a normal class which has all the virtual functions, but they're just declared not defined with a body
//a class with all the abstract methods is abstract class, to make a function abstract we need to make it pure virtual by assigning a 0 value to it as:
//	virtual returntype funName(parameters) = 0;
//hence we can use runTime polymorphism to enable abstraction as well, with help of abstract classes and abstract methods
// NOTE: you cannot create an object of abstract class
// NOTE: child classes should compulsorily implement abstract functions 


#include<iostream>
#include<vector>
using namespace std;

class Animal{
	public:
		virtual void speak()=0;
		virtual void run()=0;
};
class Dog : public Animal{
	public:
		void speak(){
			cout<<"Bark"<<endl;
		}
		void run(){
			cout<<"Dog run!"<<endl;
		}
};
class Cat : public Animal{
	public:
		void speak(){
			cout<<"Meow"<<endl;
		}
		void run(){
			cout<<"Cat run!"<<endl;
		}
};

int main(){
	Animal *p;
	vector<Animal*> animals;
	animals.push_back(new Dog());
	animals.push_back(new Cat());
//	animals.push_back(new Animal()); cannot add this, as we can't create object of abstract class
	animals.push_back(new Cat());
	animals.push_back(new Dog());
	// now we can easily use the parent reference to call child methods becase parent method is virtual function
	for(int i=0; i<animals.size(); i++){
		p = animals[i];
		p->speak();
	}
	return 0;
}


