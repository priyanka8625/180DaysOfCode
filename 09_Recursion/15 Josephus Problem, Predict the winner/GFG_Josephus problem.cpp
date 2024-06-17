class Solution
{
    public:
    int josephus(int n, int k)
    {
        return findAlive(n,k)+1;
    }
    int findAlive(int n, int k){
        if(n==1)
            return 0;
        
        return (findAlive(n-1, k)+k)%n;
    }
};
