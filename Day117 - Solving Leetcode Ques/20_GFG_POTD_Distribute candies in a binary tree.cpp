/*
struct Node {
	int key;
	Node *left, *right;
};
*/

class Solution
{
    public:
    int distribute_helper(Node* root,int& num_moves)
    {
        if(!root)
        return 0;
        
        int left=distribute_helper(root->left,num_moves);
        int right=distribute_helper(root->right,num_moves);
        
        num_moves+=abs(left)+abs(right);
        
        return root->key+left+right-1;
    }
    int distributeCandy(Node* root)
    {
        int num_moves=0;
        int call=distribute_helper(root,num_moves);
        return num_moves;
    }
};