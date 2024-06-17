//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//16 17 18 19 20

#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
	int count = 1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}
