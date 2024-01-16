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
	int arr[5] = {1,2,3,4,5};
	
	head = createLL(arr, 0, 5);
	print(head);
	return 0;
}
