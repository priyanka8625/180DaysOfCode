
#include<iostream>
#include<exception>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	try{
		if(b==0)
			throw runtime_error("Division by zero error!");
		cout<<(a/b)<<endl;
	}catch(const char *e){//this will get called when string is thrown  
		cout<<"Exception printing string msg: "<<e<<endl;
	}catch(const exception &e){//this catch block will handle all the exceptions (child classes of exception)
		cout<<"Exception: "<<e.what()<<endl;
 	}catch(...){//this is default exception block for exceptions which are not handled in program
		cout<<"Default exception!"<<endl;
	}
	return 0;
}

//output:
//	4 0 
//	Exception: Division by Zero!
