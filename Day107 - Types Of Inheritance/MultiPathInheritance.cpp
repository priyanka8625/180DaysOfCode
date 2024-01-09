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
class Youtuber: public virtual Human{
	protected:
		int subs;
	public:
		void dispYoutuber(){
			cout<<this->subs<<endl;
		}
};
class Engineer:  public virtual Human{
	protected:
		string field;
	public:
		void dispEngineer(){
			cout<<this->field<<endl;
		}
};
class CodeTeacher: public Youtuber, public Engineer{
	int salary;
	public:
		CodeTeacher(string name, int age, int subs, string field, int salary){
			this->name = name;
			this->age = age;
			this->subs = subs;
			this->field = field;
			this->salary = salary;
		}
		void show(){
			work();
			dispYoutuber();
			dispEngineer();
			cout<<this->salary<<endl;
		}
};

int main(){
	CodeTeacher a1("Priyanka", 18, 10000, "MERN & AI", 200000);
	a1.show();
}
