#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};
void insert_start(Node* &head, int data){
	Node *temp = new Node(data);
	temp->next = head;
	head = temp;
	cout<<"Node inserted!"<<endl;
}
void print(Node* head){
//	any changes in head pointer of the print function won't reflect the changes in head of main function 
//	in such cases, we can use the & reference operator, reflect the changes
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}
int main(){
	Node *head=NULL;
	head = new Node(10);
	
	//insert a new node at starting
	insert_start(head, 12);
	print(head);
	return 0;
}
