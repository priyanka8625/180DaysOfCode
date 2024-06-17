#include<iostream>
#include<vector>
using namespace std;

int main(){
	int rows, cols;
	cout<<"Enter no. of rows : ";
	cin>>rows;
	cout<<"Enter no. of columns : ";
	cin>>cols;
	vector<vector<int> >matrix(rows, vector<int>(cols, 0));
	//input
	cout<<"Enter Eements in Vector : ";
	for(int i=0; i<matrix.size(); i++)
		for(int j=0; j<matrix[0].size(); j++)
			cin>>matrix[i][j];
			
	//output
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
