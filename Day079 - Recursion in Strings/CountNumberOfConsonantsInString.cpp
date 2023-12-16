//count no. of consonants in a string

#include<iostream>
using namespace std;

int count(string str, int index){
	if(index == -1)
		return 0;
	
	//if current char is vowel do check for next chars
	if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='u' || str[index]=='o' ||
		str[index]=='A' || str[index]=='E' || str[index]=='I' || str[index]=='O' || str[index]=='U')
		return count(str, index-1);
	//else, for consonant add 1 and check for next
	else
		return 1 + count(str, index-1);
}

int main(){
	string str="Preyash";
	cout<<count(str, str.length()-1);
	return 0;
}
