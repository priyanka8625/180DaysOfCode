
// Given a string S. The task is to print all unique permutations 
// of the given string in lexicographically sorted order(permutations without repetition e.g. ABB ABB should be taken single time only)

class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    set<string> ans;
		    permutations(S, 0, S.length(), ans);
		    vector<string> result(ans.begin(), ans.end());
		    return result;
		}
		
		void permutations(string s, int index, int n, set<string> &ans){
		    if(index == n){
		        ans.insert(s);
		        return;
		    }
		    
		    for(int i=index; i<n; i++){
		        swap(s[index], s[i]);
		        permutations(s, index+1, n, ans);
		        //backtract
		        swap(s[index], s[i]);
		    }
		}
};

