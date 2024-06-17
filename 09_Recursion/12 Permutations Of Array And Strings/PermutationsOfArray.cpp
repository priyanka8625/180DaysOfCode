//permutation of array

#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int> arr, vector<vector<int> > &ans, int index){
	if(index == arr.size()){//we've got our permutation
		ans.push_back(arr);
		return;
	}
	
	//traverse the visited vector to find the unvisited values and add them up into temp
	for(int i=index; i<arr.size(); i++){
		swap(arr[i], arr[index]);
		permut(arr, ans, index+1);
		swap(arr[i], arr[index]);//backtrack
	}
}

int main(){
	int n;
	vector<vector<int> > ans;
	cout<<"Enter size of array: ";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	permut(arr, ans, 0);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<n; j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
