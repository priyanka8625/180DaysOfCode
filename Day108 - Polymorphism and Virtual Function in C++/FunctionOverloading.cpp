//compile time polymorphism -> Function Overloading 
#include<iostream>
using namespace std;

class Area{
	public:
		float calculateArea(int r){
			return 3.14*r*r;
		}
		float calculateArea(float l, float b){
			return l*b;
		}
};

int main(){
	Area a1;
	cout<<"Area of radius : "<<a1.calculateArea(10)<<endl;
	cout<<"Area of Rectangle : "<<a1.calculateArea(10, 20)<<endl;
	return 0;
}
