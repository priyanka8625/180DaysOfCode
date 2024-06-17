// built in functions in cpp
//                    functions                             header files
//pow(): - Calculates the base raised to the exponent.     cmath
//sqrt(): - Calculates the square root of a number.        cmath
//min(): - Finds the minimum value in a list.              algorithm-c++11, utility-c++11
//max(): - Finds the maximum value in a list.              algorithm
//swap(): - Swaps the values of two variables.             algorithm
//gcd(): - Finds the greatest common divisor of two numbers.   algorithm
//toupper(): - Converts a character to uppercase.              cctype
//tolower(): - Converts a character to lowercase.              cctype
//floor(): - Rounds a number down to the nearest integer.      cmath
//ceil(): - Rounds a number up to the nearest integer.         cmath

#include<iostream>
#include<cmath>
#include<algorithm>
#include<cctype>

using namespace std;

int main(){
	int arr[4] = {2, 3, 4, 1};
	cout<<"pow(2, 2) : "<<pow(2, 2)<<endl;
	cout<<"sqrt(4) : "<<sqrt(4)<<endl;
	cout<<"min(arr) : "<<min(arr)<<endl;
	cout<<"max(arr) : "<<max(arr)<<endl;
	cout<<"swap(10, 20) : "<<swap(10, 20)<<endl;
	cout<<"gcd(20, 10) : "<<gcd(20, 10)<<endl;
	cout<<"toupper('p') : "<<toupper('p')<<endl;
	cout<<"tolower('P') : "<<tolower('P')<<endl;
	cout<<"floor(2.5) : "<<floor(2.5)<<endl;
	cout<<"ceil(2.4) : "<<ceil(2.4)<<endl;
	return 0;
}
