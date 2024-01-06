#include<iostream>
using namespace std;

class a{
	char c;
	int a;
	char b;
	double d;
	float f;
};

int main(){
	a obj;
	cout<<sizeof(obj);
}

//memory allocation
//c p p p a a a a b p p p p p p d d d d d d d d f f f f
//total 32 bytes  
