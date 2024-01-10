//why to use runtime polymorphism and virtual function in it to execute child class methods? 
//if we can directly access the methods of parent and child using child obect...
// the reason is -> suppose if we have multiple classes which have some common properties in them 
// in such case, writing the same properties for n number of classes is not scalable
// so, we'll create a parent class for all those classes and define the common properties in parent class, so that all can access them
// but suppose, you're taking input from some other resources such as user input or from the database and you don't know exactly which values are going to come as result
// in this case, we can create a vector of the Parent class Reference and store the reponse objects directly into this vector
// which avoids the tedious work of checking each response object type and then calling it's function, instead we have a parent reference pointing to all those different 
// type of obects and we can call their respective method becausewe have already made that one common method as virtual in Parent class
// so this is the reason of why to use runTime polymorphism and virtual function

#include<iostream>
#include<vector>
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
class Cat : public Animal{
	public:
		void speak(){
			cout<<"Meow"<<endl;
		}
};

int main(){
	Animal *p;
	vector<Animal*> animals;
	animals.push_back(new Dog());
	animals.push_back(new Cat());
	animals.push_back(new Animal());
	animals.push_back(new Cat());
	animals.push_back(new Dog());
	// now we can easily use the parent reference to call child methods becase parent method is virtual function
	for(int i=0; i<animals.size(); i++){
		p = animals[i];
		p->speak();
	}
	return 0;
}
