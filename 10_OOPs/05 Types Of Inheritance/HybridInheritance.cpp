//heirarchical inheritance
#include<iostream>
using namespace std;

class Student{
	public:
		void dispMe(){
			cout<<"Hey! I'm a Student!"<<endl;
		}
};
class Female{
	public:
		void dispFemale(){
			cout<<"Hey! I'm a Female!'"<<endl;
		}
};
class Male{
	public:
		void dispMale(){
			cout<<"Hey! I'm a Male!'"<<endl;
		}
};
class Girl: public Female, public Student{
	public:
		void dispGirl(){
			dispMe();
			dispFemale();
			cout<<"Hey! I'm a Girl!'"<<endl;
		}
};
class Boy: public Male, public Student{
	public:
		void dispBoy(){
			dispMe();
			dispMale();
			cout<<"Hey! I'm a Boy!'"<<endl;
		}
};
int main(){
	Girl a1;
	a1.dispGirl();
	Boy a2;
	a2.dispBoy();
}
