// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    bool isHeap(struct Node* root) {
        // code here
        //algorithm:
        //1. count number of nodes in binary tree -> n
        //2. check if binary tree is Complete binary tree inorder to be heap 
        // - a binary tree will be complete if all of it's children's indices are < n
        //3. check if each node is greater than it's left and right child
        int n = count(root);
        if(!CBT(root, 0, n)){
            return 0;
        }
        return maxHeap(root);
    }
    int count(Node* root){
        if(root==NULL)
            return 0;
        
        return count(root->left) + count(root->right) + 1;
    }
    bool CBT(Node* root, int index, int n){
        if(root == NULL)//when you reach the end of tree
            return 1;
            
        if(index >= n)//when you go beyond indices but tree is not yet completely traversed
            return 0;
        
        //both the left and right subtrees should be complete Binary trees
        return CBT(root->left, 2*index+1, n) && CBT(root->right, 2*index+2, n);
    }
    bool maxHeap(Node* root){
        if(root == NULL)
            return 1;
        
        if(root->left){
            if(root->data < root->left->data)
                return 0;
            if(!maxHeap(root->left))//left subtree is not folloing max heap propertty
                return 0;
        }
        if(root->right){
            if(root->data < root->right->data)
                return 0;
            return maxHeap(root->right);//return right subtrees result whether it returns 1 or 0
            //because we check for right subtree only when left follows the property
        }
        return 1;//if a node does not have it's left or right child
    }
};