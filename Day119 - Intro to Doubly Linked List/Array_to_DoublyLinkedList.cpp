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

void ins_end(Node* &head, Node* &tail, int data){
	Node* temp = new Node(data);
	if(head == NULL){
		head = temp;
		//update tail pointer
		tail = temp;
		return;
	}else{
		//insert new element at last
		tail->next = temp;
		temp->prev = tail;
		//update tail pointer
		tail = temp;
	}
}

int main(){
	int arr[5], n;
	Node* head = NULL, *tail=NULL;
	int value;
	cout<<"Enter no of elements: "<<endl;
	cin>>n;
	for(int i=0; i<n; i++){	
		cout<<"Enter value to be inserted: "<<endl;
		cin>>arr[i];
		ins_end(head, tail, arr[i]);
	}
	print(head);
	return 0;
}
