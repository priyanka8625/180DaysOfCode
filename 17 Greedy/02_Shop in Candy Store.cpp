class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        int buy=0, get=N-1, min_spend=0, max_spend=0;
        
        while(buy <= get){
            min_spend += candies[buy];
            buy++;
            get-=K;
        }
        buy = N-1, get = 0;
        while(get <= buy){
            max_spend += candies[buy];
            buy--;
            get += K;
        }
        return {min_spend, max_spend};
    }
};
