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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

Node* deleteK(Node *head,int k)
{
    if(k == 1)
        return NULL;
    
    Node *prev = NULL, *curr = head;
    int count=1;
    while(curr){
        if(count == k){
            //delete this node
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count=1;
        }else{
            prev = curr;
            curr=curr->next;
            count++;
        }
    }
    return head;
  //Your code here
}