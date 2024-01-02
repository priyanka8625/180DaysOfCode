//Empty class: It is a class that does not contain any data members (e.g. int a, float b, char c, and string d, etc.) 
//However, an empty class may contain member functions. 


#include <iostream>
using namespace std;

// Creating an Empty Class
class Empty_class {
};

// Driver Code
int main()
{
	cout << "Size of Empty Class is = "
		<< sizeof(Empty_class);
	return 0;
}


//Why actually an empty class in C++ takes one byte?
//Simply a class without an object requires no space allocated to it. The space is allocated when the class is instantiated, 
//so 1 byte is allocated by the compiler to an object of an empty class for its unique address identification. 
//If a class has multiple objects they can have different unique memory locations. Suppose, if a class does not have any size, 
//what would be stored on the memory location? That’s the reason when we create an object of an empty class in a C++ program, 
//it needs some memory to get stored, and the minimum amount of memory that can be reserved is 1 byte. Hence, 
//if we create multiple objects of an empty class, every object will have a unique address.


//read more at : https://www.geeksforgeeks.org/why-is-the-size-of-an-empty-class-not-zero-in-c/
