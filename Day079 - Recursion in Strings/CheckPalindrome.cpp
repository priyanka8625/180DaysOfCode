class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    return checkPalindrome(S, 0, S.length()-1);
	}
	
	bool checkPalindrome(string str, int start, int end){
	    if(start>=end)
	        return true;
	    if(str[start] != str[end])
	        return false;
	    return checkPalindrome(str, start+1, end-1);
	}

};
