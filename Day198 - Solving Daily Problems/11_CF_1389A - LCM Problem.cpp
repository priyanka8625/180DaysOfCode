#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, l, r;
    for(cin>>t; t; t--){
        cin>>l>>r;
        if(2*l > r)//no answer exists
            cout<<-1<<" "<<-1<<endl;
        else{
            //the min divisible of any tqo nums between l and r will be 
            //if x = l and y = 2l, if 2l>r
            cout<<l<<" "<<2*l<<endl;
        }
    }
    return 0;
}