#include<iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main(){
    // pair<string, int> students;
    // students = make_pair("Priyanka", 70);
    // cout<<students.first<<" "<<students.second;

    // pair<string, pair<int, int > > p;
    // p = make_pair("Priyanka", make_pair(25, 80));
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    pair<pair<int, int>, string> p;
    p.first.first = 10;
    p.first.second = 20;
    p.second = "Priyanka";
    cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;

}
