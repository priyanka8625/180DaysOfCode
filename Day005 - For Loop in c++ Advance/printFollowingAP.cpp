//There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include<iostream>
using namespace std;

int main(){
	int common_diff = 7;
	for(int i=220; i<=730; i+=common_diff){
		cout<<i<<" ";
	}
	return 0;
}
