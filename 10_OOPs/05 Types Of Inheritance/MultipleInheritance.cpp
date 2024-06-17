//multiple inheritance
#include<iostream>
using namespace std;

class Engineer{
	protected:
		string specialization;
	public:
		void work(){
			cout<<this->specialization<<endl;
		}
};
class Youtuber{
	protected:
		int subs;
	public:
		void mySubscribers(){
			cout<<this->subs<<endl;
		}
};
class CodeTeacher: public Engineer, public Youtuber{
	string name;
	public:
		CodeTeacher(string specialization, int subs, string name){
			this->specialization = specialization;
			this->subs = subs;
			this->name = name;
		}
		void show(){
			this->work();
			this->mySubscribers();
			cout<<this->name<<endl;
		}
};

int main(){
	CodeTeacher a1("CSE", 100000, "Priyash");
	a1.show();
}
