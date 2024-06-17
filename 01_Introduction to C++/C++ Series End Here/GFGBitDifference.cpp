#include<iostream>
#include<cmath>

using namespace std;

int countBitsFlip(int a, int b){
        int bitFlips=0;
        while(b || a){
            if((b&1) != (a&1)){
            	bitFlips++;
                cout<<(b&1)<<" "<<(a&1)<<endl;
			}
                
            b>>=1;
            a>>=1;
        }
        return bitFlips;
    }
    
    
int main(){
	cout<<countBitsFlip(20, 5);
	return 0;
}
