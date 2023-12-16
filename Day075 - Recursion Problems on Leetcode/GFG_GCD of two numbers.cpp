class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    //using eucledian algorithm
	    if(B==0)
	        return A;
	    return gcd(B, A%B);
	      
	} 
};
