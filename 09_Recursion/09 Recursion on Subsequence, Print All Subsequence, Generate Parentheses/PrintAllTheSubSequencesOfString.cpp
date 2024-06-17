#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subseq(string &s, int index, int n, vector<string> &ans, string &temp){
	if(index == n){
		ans.push_back(temp);
		return;
	}
	//to not take index value in temp
	subseq(s, index+1, n, ans, temp);
	//take index value in temp and mve for next index
	temp.push_back(s[index]);
	subseq(s, index+1, n, ans, temp);
	//backtrack to pass the original temp to the previous function call in stack as we're passing it as a reference variable
	temp.erase(temp.length()-1);
}

int main(){
	string s="abc";
	vector<string> ans;
	string temp;
	subseq(s, 0, s.size(), ans, temp);
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i];
		cout<<endl;
	}
	return 0;
}
