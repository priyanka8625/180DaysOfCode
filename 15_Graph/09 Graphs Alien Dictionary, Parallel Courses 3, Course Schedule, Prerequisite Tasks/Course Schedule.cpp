class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        //let's apply topological sort using kahn's algorithm
	    vector<vector<int>> adjList(n);
	    vector<int> indeg(n, 0);
	    for(int i=0; i<m; i++){
	        adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
	        indeg[prerequisites[i][0]]++;
	    }
	    
	    queue<int> q;
	    vector<int> sort;
	    for(int i=0; i<n; i++)
	        if(indeg[i]==0)
	            q.push(i);
	   
	   while(!q.empty()){
	       int node = q.front();
	       sort.push_back(node);//topological sort
	       q.pop();
	       
	       //reduce indeg of adjs
	       for(int ele : adjList[node]){
	            indeg[ele]--;
	            if(indeg[ele] == 0)
	                q.push(ele);
	       }
	   }
	   if(sort.size() == n)//no cycle present, hence all tasks can be completed
	        return sort;
	   return {};
    }
};
