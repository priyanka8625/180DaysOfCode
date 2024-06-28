class Solution
{
    public:
    int isCircle(int N, vector<string> A)
    {
        // code here
        //1. convert the given array of strings into edges 
        //edge will be start->end character of each word in ascii form 0->25
        //check if eulerian circuit is there in the adj edges,
        //2. calc indeg and outdeg of each node i.e. i=0 to i=25
        vector<int> adj[26];
        vector<int> indeg(26, 0);
        vector<int> outdeg(26, 0);
        for(int i=0; i<N; i++){
            string temp = A[i];
            int u = temp[0]-'a';
            int v = temp[temp.length()-1]-'a';
            //edge u->v
            adj[u].push_back(v);
            outdeg[u]++;
            indeg[v]++;
        }
        
        //if indeg and outdeg of all nodes are same then it can be a eulerian circut 
        //AND if all non-zero degree nodes are present in a single component 
        //then it is 100% an eulerian circuit
        
        for(int i=0; i<26; i++){
            if(indeg[i]!=outdeg[i]){
                return 0;
            }
        }
        
        //check for single connected component of all nodes or not
        vector<bool> visited(26, 0);
        //start from non-zero degree node
        for(int i=0; i<26; i++){
            if(outdeg[i]!=0){
                dfs(adj, i, visited);
                break;
            }
        }
        for(int i=0; i<26; i++){
            if(indeg[i]!=0 && visited[i]==0){
                return 0;
            }
        }
        return 1;
    }
    void dfs(vector<int> adj[], int start, vector<bool>& visited){
        visited[start] = 1;
        for(int neigh : adj[start]){
            if(!visited[neigh]){
                dfs(adj, neigh, visited);
            }
        }
    }
};