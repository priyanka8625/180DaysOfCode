//throws TLE

class Solution{

	public:
	int countDivisibleSubseq(string s, int N)
	{
	    int count=0;
	    vector<string> subseq;
	    string temp;
	    findSubseq(s, 0, s.length(), temp, subseq);
	    
	    for(int i=0; i<subseq.size(); i++){
	        int number = stoi(subseq[i]);//convert string subseq into int 
	        if(number%N == 0)
	            count++;
	    }
	    return count;
	}
	
	void findSubseq(string s, int index, int n, string &temp, vector<string> &subseq){
	    if(index == n){
	        if(temp.length()>0)
	            subseq.push_back(temp);
	    }
	    //not include
	    findSubseq(s, index+1, n, temp, subseq);
	    //include
	    temp.push_back(s[index]);
	    findSubseq(s, index+1, n, temp, subseq);
	    temp.pop_back();//backtrack
	}
};
