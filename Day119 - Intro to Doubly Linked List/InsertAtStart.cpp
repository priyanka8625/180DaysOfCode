#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next, *prev;
		Node(int data){
			this->data = data;
			this->next = NULL;
			this->prev = NULL;
		}
};

void print(Node* head){
	Node *temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	Node* head = NULL;
	int value;
	cout<<"Enter value to be inserted: "<<endl;
	cin>>value;
	Node* temp = new Node(value);
	temp->next = head;
	if(head != NULL)
		head->prev = temp;
	head = temp;
	
	print(head);
	return 0;
}
