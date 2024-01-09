//single inheritance
#include<iostream>
using namespace std;

class Human{
	protected:
		string name;
		int age;
	public:
		Human(string name, int age){
			this->name = name;
			this->age = age;
		}
		void work(){
			cout<<"I am working\n";
		}
		void display(){
			cout<<this->name<<" "<<this->age<<endl;
		}
};

class Student: public Human{
	int roll_no, fees;
	public:
		//calling base class constructor by passing values from derived class constructor
		Student(string name, int age, int roll_no, int fees): Human(name, age){
			this->roll_no = roll_no;
			this->fees = fees;
		}
		//method overriding
		void display(){
			cout<<this->name<<" "<<this->age<<" "<<this->roll_no<<" "<<this->fees<<endl;
		}
};

int main(){
	Student *A1 = new Student("Priyash", 02, 70, 99);
	A1->display();
}
