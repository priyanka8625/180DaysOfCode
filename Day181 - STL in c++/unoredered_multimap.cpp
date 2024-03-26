//stores key-value pair elements for multiple duplicate keys
//stores in the order of insertion of the keys
//takes O(1) time for insertion, deletion, searching of elements
//it uses hashing for insertion, searching and deletion of the elements

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multimap<int, int> mp;
    //unordered_set<int, greater<int>> s;//stores values in descendign order

    //insertion
    mp.insert(make_pair(1, 30));
    mp.insert(make_pair(1, 100));
    mp.insert(make_pair(2, 40));
    mp.insert(make_pair(3, 50));
    //this method is not allowed in multimap to avoid ambiguity
    // mp[4] = 60;//for insertion as well as updation

    //traversing 
//    for(auto &[key,value]:mp)
//        cout<<key<<":"<<value<<endl;
//
//    for(auto it=mp.begin(); it!=mp.end(); it++)
//        cout<<it->first<<":"<<it->second<<endl;


    //search
    if(mp.find(1) != mp.end())
        cout<<"1 present"<<endl;
    else 
        cout<<"1 not present"<<endl;
        
    if(mp.count(8)>0)
        cout<<"8 present"<<endl;
    else 
        cout<<"8 not present"<<endl;

    //delete 
    cout<<mp.count(1)<<endl;
    mp.erase(1);
    cout<<mp.count(1)<<endl;
}