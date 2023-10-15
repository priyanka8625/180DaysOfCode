//Normal BST to Balanced BST

//Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height. Return the balanced BST.


class Solution{
    
    private:
    void inorder(Node* root,vector<int>& arr){
        if(root){
            inorder(root->left,arr);
            arr.push_back(root->data);
            inorder(root->right,arr);
        }
    }
    
    Node* construct(vector<int>& arr, int l, int r) {
        if (l <= r) {
            int mid = (l + r) / 2;
            Node* curr = new Node(arr[mid]);

            curr->left = construct(arr, l, mid - 1);
            curr->right = construct(arr, mid + 1, r);
            return curr;
        }
        return nullptr;
    }
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int> arr;
    	inorder(root,arr);
    	
    	int l=0;
    	int r=arr.size()-1;
    	
    	Node* res=construct(arr,l,r);
    	return res;
    }
};
