/*
//Structure of the Node of the BST is as
struct Node {
    int key;
    Node* left, *right;
};


   'N' is the element
   'size' is the total element in BST
  */

class Solution {
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        //let's solve this using a while loop
        //we need to traverse a branch of the BST, in order to find the value <= n
        int ans=-1;
        while(root){
            if(root->key <= n){
                ans = root->key;
                root = root->right; //move to  the right subtree
            }else if(root->key > n){
                root = root->left;
            }
        }
        return ans;
    }
};