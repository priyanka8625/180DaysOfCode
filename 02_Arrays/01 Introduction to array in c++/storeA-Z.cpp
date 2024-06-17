//Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays

#include<iostream>
using namespace std;

int main(){
	char arr[26];
	cout<<"Array elements: ";
	for(int i=0; i<26; i++){
		arr[i] = 'a'+i;
		cout<<arr[i]<<" ";
	}
	return 0;
}
