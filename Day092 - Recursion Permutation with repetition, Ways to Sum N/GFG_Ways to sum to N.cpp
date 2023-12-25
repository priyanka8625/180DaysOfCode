//Throws TLE

class Solution
{
  public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    int countWays(int arr[], int m, int N) 
    { 
        if(N==0)
            return 1;
        if(N<0)
            return 0;
        
        //call function for all the elements because a permutation can contain all the elements at any position
        long long ans=0;
        for(int i=0; i<m; i++){
            ans += countWays(arr, m, N-arr[i]);
        }
        return ans%1000000007;
    } 
    
};
