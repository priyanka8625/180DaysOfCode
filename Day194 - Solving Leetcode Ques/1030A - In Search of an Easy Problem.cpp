#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    bool flag = 1;
    for(int i:nums){
        if(i==1){
            flag = 0;
            cout<<"HARD"<<endl;
            break;
        }
    }
    if(flag)
        cout<<"EASY"<<endl;
        
    return 0;
}