//find the cube of a number using function

#include<iostream>
using namespace std;

int cubeOf(int n){
	return n*n*n;
}

int main(){
	int n=0;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Cube of "<<n<<" -->> "<<cubeOf(n);
	return 0;
}
