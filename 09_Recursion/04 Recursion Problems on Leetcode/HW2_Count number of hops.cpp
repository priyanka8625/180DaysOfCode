class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        long long mod = 1000000007;
        if(n<=1)//for n-1 & n-2(0, 1)
             return 1;
        if(n==2)//for n-3 (2)
             return n;
             
        //using for loop
        long long n1=1%mod, n2=1%mod, n3=2%mod, res = (n1+n2+n3)%mod;
        for(int i=4; i<=n; i++){
            n1 = n2%mod;
            n2 = n3%mod;
            n3 = res%mod;
            res = (n1 + n2 + n3)%mod;
        }
        return res;
        
        
        //using recursion
        // if(n<=1)//for n-1 & n-2(0, 1)
        //     return 1;
        // if(n==2)//for n-3 (2)
        //     return n;
        
        // return countWays(n-1) + countWays(n-2) + countWays(n-3);
    }
  
  /*  
  if we analyze the pattern, it's clear that to reach the n'th stair we've
  total possible ways = ways(n-1) + ways(n-2) + ways(n-3)'th stair
  for example,
  n=0 => ways=1
  n=1 => ways=1   (1)
  n=2 => ways=2   (1+1, 2)  
  n=3 => ways=4   (1+1+1, 1+2, 2+1)   =>  ways(n-1)+ways(n-2)+ways(n-3)=1+1+2 = 4
  n=4 => ways=7   (1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2, 1+3, 3+1)   => ways(n-1)+ways(n-2)+ways(n-3)=1+2+4 = 7
  n=5 => ways=13   => ways(n-1)+ways(n-2)+ways(n-3)=2+4+7 = 13
  for n=5, ways are:
    1 1 1 1 1
    1 1 1 2
    1 1 2 1
    1 2 1 1
    2 1 1 1
    2 2 1
    1 2 2
    2 1 2
    1 1 3
    1 3 1
    3 1 1
    3 2
    2 3
    
    Hence we can apply the logic of fibonnaci series here, any number is a sum of previous three numbers!
    using recursive approach but it gives TLE
    so we'll go for the for loop approach
    */
};
