//inheritance

#include<iostream>
using namespace std;

class Human{
	private:
		string religion, skinColor;
	public:
		string name;
		int age, weight;
};

class Student : public Human{ //private members won't get deribved and public will be treated protected in Student
	int roll_no, fees;
	public:
		Student(string name, int age, int weight, int roll_no, int fees){
			this->name = name;
			this->age = age;
			this->weight = weight;
			this->roll_no = roll_no;
			this->fees = fees;
		}
		void display(){
			cout<<this->name<<endl;
			cout<<this->age<<endl;
			cout<<this->weight<<endl;
			cout<<this->roll_no<<endl;
			cout<<this->fees<<endl;
		}
};

class Teacher : public Human{ //public will be treated public in Teacher 
	int salary, id;
};

int main(){
	Student s1("Priyanka", 18, 39, 70, 65000);
	s1.display();
	Teacher t1;
	t1.name = "Priyanka";
	t1.age = 25;
	t1.weight = 40;
	return 0;
}
