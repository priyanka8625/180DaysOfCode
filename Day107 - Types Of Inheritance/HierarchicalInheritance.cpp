//heirarchical inheritance
#include<iostream>
using namespace std;

class Human{
	protected:
		string name;
		int age;
	public:
		void work(){
			cout<<this->name<<" "<<this->age<<endl;
		}
};
class Student: public Human{
	protected:
		int roll_no;
	public:
		Student(string name, int age, int roll_no){
			this->name = name;
			this->age = age;
			this->roll_no = roll_no;
		}
		void dispStudent(){
			work();
			cout<<this->roll_no<<endl;
		}
};
class Teacher: public Human{
	int salary;
	public:
		Teacher(string name, int age, int salary){
			this->name = name;
			this->age = age;
			this->salary = salary;
		}
		void show(){
			this->work();
			cout<<this->salary<<endl;
		}
};

int main(){
	Student a1("Priyanka", 18, 70);
	a1.dispStudent();
	Teacher a2("Shreyash", 20, 02);
	a2.show();
}
