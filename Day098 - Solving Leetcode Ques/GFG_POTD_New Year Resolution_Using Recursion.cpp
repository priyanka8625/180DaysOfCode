class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        return combinations(0, 0, N, coins);
    }
    
    //create combinations
    int combinations(int sum, int index, int n, int *coins){
        if(index == n ){
                if(sum == 0)
                    return 0;
                if(!(sum == 2024 || (sum%20 == 0 || sum%24 == 0)))
                    return 0;
        }
        if(sum != 0 && (sum == 2024 || sum%20 == 0 || sum%24 == 0))
            return 1;
        
        //don't include current index in sum
        return combinations(sum, index+1, n, coins) || combinations(sum + coins[index], index+1, n, coins);
        
    }
    
};
