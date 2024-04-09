#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int giftedFri;
    unordered_map<int, int> gifts;
    //map will store key as the friend who has been given a gift
    //value as the freind who has given the gift
    for(int i=1; i<=n; i++){
        cin>>giftedFri;
        gifts[giftedFri] = i;
        // key -> frind who has been gifted : value-> fri who gifted
    }
    for(int i=1; i<=n; i++){
        //now we'll find out which friend has gifted to i
        cout<<gifts[i]<<" ";
    }
    cout<<endl;
    return 0;
}
