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
Node* createLL(int arr[], int index, int n){
	if(index == n){
		return NULL;
	}
	Node *temp = new Node(arr[index]);
	temp->next = createLL(arr, index+1, n);
	return temp;
}

void del_end(Node* &head){
	//case-1: List is empty
	if(head == NULL){
		cout<<"List is empty!"<<endl;
		return;
	}
	Node *last, *prev;
	//case-2: single node
	if(head->next == NULL){
		last = head;
		head = NULL;
	}else{
		//case-3: 2 or more nodes
		prev = head;
		last = head->next;
		while(last->next){
			prev = last;
			last = last->next;
		}
		prev->next = NULL;
	}
	cout<<"Deleted: "<<last->data<<endl;
	delete last;
}

void print(Node* head){
//	any changes in head pointer of the print function won't reflect the changes in head of main function 
//	in such cases, we can use the & reference operator, reflect the changes
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
int main(){
	Node *head=NULL;
	int arr[5] = {1,2,3,4,5};
	//insert a new node at starting
	head = createLL(arr, 0, 5);
	print(head);
	del_end(head);
	print(head);
	return 0;
}
