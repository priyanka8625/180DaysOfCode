class Solution
{
	public:
	    class Node{
	        public:
    	        char ch;
    	        int freq;
    	        Node* left, *right;
    	        
    	        Node(int freq, char ch){
    	            this->ch = ch;
    	            this->freq=freq;
    	            this->left=NULL;
    	            this->right = NULL;
    	        }
	    };
	    class comp{
	        public:
	        bool operator()(Node* a, Node* b){
	            return a->freq > b->freq;//min heap, we used> instead of < bcuz in case of heap this logic works opposite
	        }
	    };
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    //build the huffman tree
		    //1. build the minheap on the basis of freq
		    priority_queue<Node*, vector<Node*>, comp>pq;
		    
		    for(int i=0; i<N; i++){
		        pq.push(new Node(f[i], S[i]));
		    }
		    
		    //2. take 2 min nodes and create the huffman tree
		    while(pq.size()>1){
		        Node* first = pq.top();
		        pq.pop();
		        Node *second = pq.top();
		        pq.pop();
		        
		        //add their freqs and push to heap
		        Node* root = new Node(first->freq + second->freq, 'p');//pis dummy char for additon nodes
		        root->left = first;
		        root->right = second;
		        
		        pq.push(root);
		    }
		    //now the only element lef in pq is the root of the whole tree
		    Node *root = pq.top();
		    pq.pop();
		    
		    //find the strings contained in this tree using preorder traversal
		    //first left and then right
		    vector<string> ans;
		    string temp="";
		    preorder(root, ans, temp);
		    
		    return ans;
		}
		void preorder(Node* root, vector<string>& ans, string& temp){
		    if(!root->left && !root->right){
		        ans.push_back(temp);
		        return;
		    }
		    temp.push_back('0');
		    preorder(root->left, ans, temp);
		    temp.pop_back();
		    
		    temp.push_back('1');
		    preorder(root->right, ans, temp);
		    temp.pop_back();
	    }
};
