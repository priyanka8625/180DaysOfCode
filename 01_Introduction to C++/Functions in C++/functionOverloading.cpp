// function overloading

//rules of function overloading
//1. The functions must have the same name.
//2. The functions must have different parameter lists.
//3. The parameters in each parameter list must be in different order or have different types.

#include<iostream>
using namespace std;

void swap(int& a, int& b){
	a = (a+b);
	b = a-b;
	a = a-b;
}

void swap(float &a, float &b){
	a = (a+b);
	b = a-b;
	a = a-b;
}
//can't overload below function as it's parameters are matching to float's swap function
//void swap(float& a, float& b, float& c){
//	float a1=a, b1=b, c1=c;
//	a = b1;
//	b = c1;
//	c = a1;
//}
int main(){
	int a, b;
	float a1,b1;
	cout<<"Enter 2 int values:";
	cin>>a>>b;
	cout<<"Enter 2 float values:";
	cin>>a1>>b1;
	swap(a,b);
	swap(a1,b1);
	cout<<"a = "<<a<<" b = "<<b<<endl;
	cout<<"a1 = "<<a1<<" b1 = "<<b1<<endl;
	return 0;
}
