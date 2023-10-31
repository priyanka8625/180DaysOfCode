#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > transpose(vector<vector<int> > matrix) {
        int n=matrix.size();
        //transpose using the lower triangle of diagonal elements
        for(int col=0; col<n-1; col++)
            for(int row=col+1; row<n; row++)
                swap(matrix[row][col], matrix[col][row]);
        return matrix;
}


int main(){
	int n=0;
	cout<<"Enter n : ";
	cin>>n;
	vector<vector<int> >matrix(n, vector<int>(n, 0));
	//input
	cout<<"Enter Eements in Vector : ";
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>matrix[i][j];
	matrix = transpose(matrix);
	//output
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
