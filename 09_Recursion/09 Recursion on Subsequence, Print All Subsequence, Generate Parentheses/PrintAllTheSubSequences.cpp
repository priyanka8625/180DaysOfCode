#include<iostream>
#include<vector>
using namespace std;

void subseq(int arr[], int index, int n, vector<vector<int> > &ans, vector<int> temp){
	if(index == n){
		ans.push_back(temp);
		return;
	}
	//to not take index value in temp
	subseq(arr, index+1, n, ans, temp);
	//take index value in temp and mve for next index
	temp.push_back(arr[index]);
	subseq(arr, index+1, n, ans, temp);
}

int main(){
	int n, arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	vector<vector<int> > ans;
	vector<int> temp;
	subseq(arr, 0, n, ans, temp);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
