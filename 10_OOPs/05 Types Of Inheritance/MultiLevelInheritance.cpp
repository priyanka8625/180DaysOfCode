//multilevel inheritance
#include<iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		void introduce(){
			cout<<this->name<<" "<<this->age<<endl;
		}
};
class Employee : public Person{
	protected:
		int salary;
	public:
		void monthly_salary(){
			cout<<this->salary<<endl;
		}
};
class Manager: public Employee{
	public:
		string dept;
		int noOfEmployees;
		Manager(string name, int age, int salary, string dept, int noOfEmployees){
			this->name = name;
			this->age = age;
			this->salary = salary;
			this->dept = dept;
			this->noOfEmployees = noOfEmployees;
		}
		void display(){
			this->introduce();
			this->monthly_salary();
			cout<<this->dept<<" "<<this->noOfEmployees<<endl;
		}
};

int main(){
	Manager m1("Priyash", 18, 100000, "Developer", 111);
	m1.display();
}
