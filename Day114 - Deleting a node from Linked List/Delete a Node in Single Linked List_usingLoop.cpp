/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *curr=head, *prev=NULL;
    x--;
    while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    return head;
}