//Print all the Capital and small letters  using a while loop. It means A-Z, then a-z


#include<iostream>
using namespace std;

int main(){
	char ch1= 'A';
	char ch2= 'a';
	while(ch1 <= 'Z' and ch2<='z'){
		cout<<" "<<ch1<<"  "<<ch2<<endl;
		ch1++;
		ch2++;
	}
	return 0;
}
