class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        //we'll first find that which chars are occuring first in the given dictionary
        //create adjList from dict
        //apply kahn's algorithm to find the ordering of alien dict
        vector<vector<int>> adjList(K);
	    vector<int> indeg(K);
	    
        for(int in=0; in<N-1; in++){
            string str1 = dict[in];
            string str2 = dict[in+1];
            int i=0, j=0;
            while(i<str1.length() && j<str2.length() && str1[i]==str2[j]){
                i++;
                j++;
            }
            //if str1 is < str2 
            if(j== str1.length())
                continue;//don't add any mapping in list 
                
            //when you find a mismatch
            //add it to the list and str1 char will come first and then str2 char hence str1->str2
            adjList[str1[i]-'a'].push_back(str2[j]-'a');
            indeg[str2[j]-'a']++;//indeg
        }
        
        queue<int> q;
	    string sort;
	    for(int i=0; i<K; i++)
	        if(indeg[i]==0)
	            q.push(i);
	   
	   while(!q.empty()){
	       int node = q.front();
	       sort.push_back(node+'a');//topological sort
	       q.pop();
	       
	       //reduce indeg of adjs
	       for(int ele : adjList[node]){
	            indeg[ele]--;
	            if(indeg[ele] == 0)
	                q.push(ele);
	       }
	   }
	   return sort;
    }
};