//F G H I J K
//F G H I J K
//F G H I J K
//F G H I J K


//commented lines define approach2 


#include<iostream>
using namespace std;

int main(){
	int row=0, col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of cols : ";
	cin>>col;
//	char ch = 'F';
	for(int i=1; i<=row; i++){
//		ch = 'F';
		for(int j=1; j<=col; j++){
			cout<<(char)('F'+(j-1))<<" ";
//			cout<<ch;
//			ch++;
		}
		cout<<endl;
	}
	return 0;
}
