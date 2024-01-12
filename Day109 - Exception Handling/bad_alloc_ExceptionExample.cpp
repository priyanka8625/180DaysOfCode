
#include<iostream>
#include<exception>
using namespace std;

int main(){
	try{
		int *arr = new int[10000000000000000];//so much amount of memory 
		cout<<"Memory allocated!"<<endl;
	}catch(const char *e){//this will get called when string is thrown  
		cout<<"Exception printing string msg: "<<e<<endl;
	}catch(const bad_alloc &e){
	    cout<<"Bad allocation: "<<e.what()<<endl;
	}catch(const exception &e){//this catch block will handle all the exceptions (child classes of exception)
		cout<<"Exception: "<<e.what()<<endl;
 	}catch(...){//this is default exception block for exceptions which are not handled in program
		cout<<"Default exception!"<<endl;
	}
	return 0;
}

//output:
//	Bad allocation: std::bad_alloc
