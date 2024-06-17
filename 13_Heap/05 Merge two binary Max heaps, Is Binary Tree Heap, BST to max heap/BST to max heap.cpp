/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution{
  public:
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        //algrithm :
        //1. create array using inorder traversal
        //2. update the data field of each node using post order traversal 
        //if we observe the elements in inorder are inserted into resulting tree in the postorder 
        //we just matched the pattern
        vector<int> nodes;
        inorder(root, nodes);
        int index=0;
        postorder(root, nodes, index);
    }    
    void inorder(Node* root, vector<int>& nodes){
        if(root == NULL)
            return;
        inorder(root->left, nodes);
        nodes.push_back(root->data);
        inorder(root->right, nodes);
    }
    void postorder(Node* root, vector<int>& nodes, int& index){
        if(root==NULL)
            return;
        
        postorder(root->left, nodes, index);
        postorder(root->right, nodes, index);
        root->data = nodes[index];
        index++;//to get the correct index for the previous calls
    }
};
