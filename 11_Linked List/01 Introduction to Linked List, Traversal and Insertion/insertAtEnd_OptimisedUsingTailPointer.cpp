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
void insert_end(Node* &head, Node* &tail, int data){
	if(head == NULL){
		head = new Node(data);
		tail = head;
		cout<<"Node inserted!"<<endl;
		return;
	}
	//if LL is not empty
	tail->next = new Node(data);
	tail = tail->next;
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
	Node *head=NULL, *tail=NULL;
	int arr[5] = {1,2,3,4,5};
	
	//insert a new node at end
	for(int i=0;i<5;i++){	
		insert_end(head, tail, arr[i]);	
	}
	print(head);
	return 0;
}
