/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    class Compare{
        //compare function for storing the values in minheap in a specific order
        public:
        bool operator()(Node* a, Node* b){
            return a->data > b->data;//the operator function works opposite for the heaps 
            //in general, for sorting, sets, maps: to store elements in customized order we specify the actual order
            //that is expected but in case of heap we specify the exact oppsoite order
            //as above, if a and b are not sorted order(ascending) then swap them
            //for sorting: (ascending) we had specified a<=b instead of >, to swap eles when they're not in order
        }
    };
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           priority_queue<Node*, vector<Node*>, Compare> pq;
           Node* ans = new Node(0), *tail=ans;
           
           //push the first K elements into priority queue
           for(int i=0; i<K; i++)
                pq.push(arr[i]);
            
            //now pop the minimum data containing nodes and there next node into pq
            // so that by using just k extra space (for pq) we can compare all the data efficiently
            //instead of n*k space for storing all the eles in pq(n is number of nodes in LL)
            
            while(!pq.empty()){
                Node* node = pq.top();
                pq.pop();
                tail->next = node;
                tail = tail->next;
                
                //push next of the current min node
                if(node->next)
                    pq.push(node->next);
                
            }
            return ans->next;
    }
};

