

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    stack<int> s;
	    vector<int> visited(V, 0);
	    for(int i=0; i<V; i++){
	        if(!visited[i])
	            sort(i, adj, visited, s);
	    }
	    while(!s.empty()){
	        int top = s.top();
	        s.pop();
	        ans.push_back(top);
	    }
	    return ans;
	}
	void sort(int curr, vector<int> adj[], vector<int>& visited, stack<int>& s){
	    visited[curr] = 1;
	    
	    for(int ele : adj[curr]){
	        if(!visited[ele])
	            sort(ele, adj, visited, s);
	    }
	    
	    //add this elemen to stack after vsiting all it's v's i.e. u->v
	    s.push(curr);
	}
};
