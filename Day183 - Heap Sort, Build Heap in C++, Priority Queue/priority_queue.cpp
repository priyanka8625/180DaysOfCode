#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	//priority_queue is built upoon heap, hence it takes O(logn) for insert(to rebalance after insert i.e. heapify), O(logn) for delete (to heapify)
	priority_queue<int> q;//by default it crease a max heap
	cout<<"MAXHEAP:"<<endl;
	q.push(10);
	q.push(20);
	q.push(11);
	q.push(18);
	q.push(15);
	cout<<"top: "<<q.top()<<endl;
	cout<<"size:"<<q.size()<<endl;
	cout<<"empty:"<<q.empty()<<endl;
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;
	
	cout<<"MINHEAP:"<<endl;
	priority_queue<int, vector<int>, greater<int> > qm;//min heap syntax, min element at top of the heap
	qm.push(10);
	qm.push(20);
	qm.push(11);
	qm.push(18);
	qm.push(15);
	cout<<"top: "<<qm.top()<<endl;
	cout<<"size:"<<qm.size()<<endl;
	cout<<"empty:"<<qm.empty()<<endl;
	while(!qm.empty()){
		cout<<qm.top()<<" ";
		qm.pop();
	}
	return 0;
}
