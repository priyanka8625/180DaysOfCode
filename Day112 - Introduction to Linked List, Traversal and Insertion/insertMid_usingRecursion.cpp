//insert at mid using recursion in a linkedList
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

void insert_mid(Node* p, int pos, int data){
	if(p == NULL){
		//it means pos is more than the no of elements in the list
		cout<<"No. of Nodes in the list is not sufficient!"<<endl;
		return ;
	}
	if(pos == 0){
		//you've reached the pos'th element
		Node *temp = new Node(data);
		temp->next = p->next;
		p->next = temp;
		return ;
	}
	insert_mid(p->next, pos-1, data);
}

Node* createLL(int arr[], int index, int n, Node* prev){
	if(index == n){
		return prev;
	}
	Node *temp = new Node(arr[index]);
	temp->next = prev;
	return createLL(arr, index+1, n, temp);
}
void print(Node* head){
//	any changes in head pointer of the print function won't reflect the changes in head of main function 
//	in such cases, we can use the & reference operator, reflect the changes
	cout<<"List : "<<endl;
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
int main(){
	Node *head=NULL;
	int arr[5] = {1,2,3,4,5};
	
	//create a linked list using array first
	head = createLL(arr, 0, 5, NULL);
	print(head);
	//then, insert element
	int x,data;
	cout<<"Enter position of the node after which you want to insert(starting from 1): "<<endl;
	cin>>x;
	cout<<"Enter data to be inserted: "<<endl;
	cin>>data;
	insert_mid(head, x-1, data);
	print(head);
	return 0;
}
