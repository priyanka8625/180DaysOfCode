#include<iostream>
using namespace std;

class Student{
	public:
	string name;
	int age, rollNo;
	string grade;
};

int main(){
	Student *s = new Student;
	cout<<"Enter student \nName\nAge\nRoll No\nGrade...\n";
	cin>>(*s).name>>(*s).age>>(*s).rollNo>>(*s).grade;
	cout<<"Details: "<<endl;
	cout<<s->name<<endl;
	cout<<s->age<<endl;
	cout<<s->rollNo<<endl;
	cout<<s->grade<<endl;
}

//memory allocation
//c p p p a a a a b p p p p p p d d d d d d d d f f f f
//total 32 bytes  
