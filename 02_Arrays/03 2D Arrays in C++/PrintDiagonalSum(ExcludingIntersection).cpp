//Given a matrix of size n*n, Print sum of diagonal element.
// Ex:    1 2 3
//    	4 5 6
//        7 8 9
//Its answer: 1+5+9 , 3+5+7, So the total sum will be 1+5+9+3+5+7 = 30. 
//Here we can see that 5 is included 2 times, so we should include it only 1 time so the final answer will be, 30-5 = 25.  So the final answer will be 25.


#include<iostream>
using namespace std;

void printArray(int a[50][50], int rows, int cols){
	cout<<"Array-->"<<endl;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}

int main(){
	int rows=0, cols=0, arr[50][50], sum=0;
	cout<<"Enter rows of array: ";
	cin>>rows;
	cout<<"Enter columns of array: ";
	cin>>cols;
	if(rows != cols){
		cout<<"Row and column should be equal!";
		return 0;
	}
	cout<<"Enter elements for array: ";
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr[i][j];	
		}
	}
	cout<<"Diagonal Elements: "<<endl;
	//row will be same while traversing the left-to-right and right-to-left diagonals of array
	//for the left-to-right diagnal, row and col are always same
	//but for the right-to-left diagonal, row is same as first one but col starts from n-1 to 0
	
	int j = cols-1;
	for(int i=0; i<rows; i++){
		if(i == j){//we're at the intersection of the two diagonals
			sum += arr[i][i];//[i][j] == [i][j]
			cout<<arr[i][i];
		}else{
			sum += (arr[i][i]+arr[i][j]);
			cout<<arr[i][i]<<" + "<<arr[i][j];
		}
		cout<<"\n";
		j--;
	}
	cout<<"Diagonal Sum = "<<sum;
	return 0;
}
