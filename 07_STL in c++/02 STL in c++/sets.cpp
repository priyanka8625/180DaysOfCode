//stores unique elements
//stores in sorted order
//takes logn time for insertion, deletion, searching of elements
//becuase it uses self balanced binary search trees(AVL) internally to store & manipulate the elements in sorted order
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    int age;
    string name;

    bool operator < (const Person &other) const{
        return age<other.age;//small ages will be present first in set
    }
};
int main(){
    set<int> s;
    //set<int, greater<int>> s;//stores values in descendign order

    //insertion
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    // for(int i:s)
    //     cout<<i<<" ";
    // for(auto it=s.begin(); it!=s.end(); it++)
    //     cout<<*it<<" ";


    //search
    if(s.find(110) != s.end())
        cout<<"10 present"<<endl;
    else 
        cout<<"10 not present"<<endl;
        
    if(s.count(110)>0)
        cout<<"10 present"<<endl;
    else 
        cout<<"10 not present"<<endl;

    //delete 
    s.erase(10);


    //user defined types set
    // set<Person> s;
    // Person p1, p2, p3;
    // p1.age=10; p1.name="Priyanka";
    // p2.age=20; p2.name="Vishakha";
    // p3.age=30; p3.name="Shreyas";
    // s.insert(p1);
    // s.insert(p2);
    // s.insert(p3);
    // //at this point the above cod efor user defined type throws error
    // //because it doesn't know how to arrange thi user defined object in set
    // //hence we'll provide the operator to compare values and store in sorted order in set 
    // for(auto it=s.begin(); it!=s.end(); it++)
    //     cout<<*it<<" ";
}
