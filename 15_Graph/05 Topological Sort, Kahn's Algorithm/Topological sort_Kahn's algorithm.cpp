class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   // using BFS i.e. KAHN's algorithm
	    vector<int> ans;
	    queue<int> q;
	    vector<int> indegrees(V, 0);
	    //1. find indegrees of each vertex
	    for(int i=0; i<V; i++){
	        for(int ele : adj[i]){
	            //the no. of times ele will appear is it's indegree which represents it's cnnected by how many
	            indegrees[ele]++;
	        }
	    }
	    
	    //2. push 0 indegree vertices into queue
	    for(int i=0; i<V; i++)
	        if(indegrees[i]==0)
	            q.push(i);
	   
	   //3. extract vertex from q and apply below steps:
	       // a. push this into ans
	       // b. decrement the indegrees of it's adj by 1
	       // c. if any adj becomes 0 after step-b push it into queue
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        for(int ele : adj[node]){
	            if(--indegrees[ele] == 0){
	                q.push(ele);
	            }
	        }
	    }
	    
	    
	    return ans;
	}
};