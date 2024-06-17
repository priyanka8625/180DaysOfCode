class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    //let's apply topological sort using kahn's algorithm
	    vector<vector<int>> adjList(N);
	    vector<int> indeg(N, 0);
	    for(int i=0; i<P; i++){
	        adjList[prerequisites[i].second].push_back(prerequisites[i].first);
	        indeg[prerequisites[i].first]++;
	    }
	    
	    queue<int> q;
	    vector<int> sort;
	    for(int i=0; i<N; i++)
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
	   if(sort.size() == N)//no cycle present, hence all tasks can be completed
	        return true;
	   return false;
	}
};
