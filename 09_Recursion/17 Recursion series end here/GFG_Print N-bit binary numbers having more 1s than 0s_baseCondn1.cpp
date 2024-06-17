
class Solution{
public:	
    
	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    //generate binary bits 
	    find(ans, "", 0, 0, N);
	    return ans;
	}
	void find(vector<string> &ans, string temp, int ones, int zeros, int n){
	    if(temp.size() == n){
	        ans.push_back(temp);
	        return;
	    }
	    
	    //include 1 bit in temp, temp indicates binary number here
	    temp.push_back('1');
	    find(ans, temp, ones+1, zeros, n);//icrease the count of 1  and generate numbers with two choices again 0 and 1
	    temp.pop_back();
	    
	    //include zeroes in the combination of 0 and 1 only if ones>zeros
	    if(ones>zeros){
	        //if temp satisfies the condition of prefixes having ones > zeros
	        temp.push_back('0');
	        find(ans, temp, ones, zeros+1, n);//increase the count of 0s and generate numbers with two choices again 0 and 1
	        temp.pop_back();
	    }
	}
};
