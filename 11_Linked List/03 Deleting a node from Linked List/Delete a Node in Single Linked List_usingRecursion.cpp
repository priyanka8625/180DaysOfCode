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
Node* deleteNode(Node *curr,int x)
{
    //Your code here
    if(x==1){
        Node *temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deleteNode(curr->next, x-1);
    return curr;
}