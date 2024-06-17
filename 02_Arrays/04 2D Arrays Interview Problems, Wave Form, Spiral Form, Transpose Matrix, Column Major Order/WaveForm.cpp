//wave form printing 
#include<iostream>
#include<vector>
using namespace std;

void printWave(vector<vector<int> > matrix, int rows, int cols){
	int j=0;
	for(int i=0; i<cols; i++){
		if(i%2==0)
			for(int j=0; j<rows; j++)
				cout<<matrix[j][i]<<" ";
		else
			for(int j=rows-1; j>=0; j--)
				cout<<matrix[j][i]<<" ";
	}
}

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
	printWave(matrix, rows, cols);
	return 0;
}
