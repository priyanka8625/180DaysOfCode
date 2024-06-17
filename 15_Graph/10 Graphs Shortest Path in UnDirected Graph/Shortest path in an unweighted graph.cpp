vector<int> shortestPath( vector<pair<int,int>> edges , int N , int M, int src , int dst){
	
	// Write your code here
	vector<int> parent(N, -1);
	vector<bool> visited(N, 0);
	vector<int> path;
	vector<int> adjList[N];

	//create adjList of undirected graph using 0-based indexing of nodes
	for(int i=0; i<M; i++){
		adjList[edges[i].first-1].push_back(edges[i].second-1);
		adjList[edges[i].second-1].push_back(edges[i].first-1);
	}
	src--;
	dst--;
	//now let's apply simple bfs to get the shortet path from source to all nodes
	queue<int> q;
	q.push(src);
	visited[src] = 1;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		
		//shortest distance of neighbour from src will always be through it's parent
		//parent of neighbour will be the current node 
		for(int ele : adjList[node]){
			if(!visited[ele]){
				q.push(ele);
				visited[ele] = 1;
				parent[ele] = node;
			}
		}
	}

	//now get the path of src to dst using the parent array
	while(dst != -1){
		path.push_back(dst+1);
		dst = parent[dst];//go to it's parent
	}
	reverse(path.begin(), path.end());
	return path;

}
