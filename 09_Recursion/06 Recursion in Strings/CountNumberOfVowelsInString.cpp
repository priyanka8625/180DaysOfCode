//count no. of vowels in a string

#include<iostream>
using namespace std;

int count(string str, int index){
	if(index == -1)
		return 0;
	
	if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='u' || str[index]=='o')
		return 1 + count(str, index-1);
	else
		return count(str, index-1);
}

int main(){
	string str="naman";
	cout<<count(str, str.length()-1);
	return 0;
}
