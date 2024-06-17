#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<type_oflist> name; creates doubly linked list
    //methods:
    // push_back
    // push_front
    // pop_back
    // pop_front
    // begin
    // end
    // size

    list<int> l1;
    l1.push_back(10);
    l1.pop_back();
    l1.push_front(10);
    l1.push_back(20);
    l1.push_front(30);
    l1.pop_front();
    cout<<l1.front()<<" "<<l1.back()<<endl;
    cout<<l1.size()<<endl;
//    for(auto it=l1.begin(); it!=l1.end(); it++)
//        cout<<*it<<" ";
	for(list<int>::Iterator it=l1.begin(); it!=l1.end(); it++)
        cout<<*it<<" ";

    //print in reverse order
    for(auto it=l1.rbegin(); it!=l1.rend(); it++)
        cout<<*it<<" ";
}
