//You are given two 0-indexed integer arrays, cost and time, of size n representing the costs and the time taken to paint n different walls respectively. There are two painters available:
//
//A paid painter that paints the ith wall in time[i] units of time and takes cost[i] units of money.
//A free painter that paints any wall in 1 unit of time at a cost of 0. But the free painter can only be used if the paid painter is already occupied.
//Return the minimum amount of money required to paint the n walls.

class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        vector<long long> money(n + 1, INT_MAX);
        money[0] = 0;
        for (int i = 0; i < n; i++) {
            for (int j = n; j > 0; j--) {
                money[j] = min(money[j], money[max(j - time[i] - 1, 0)] + cost[i]);
            }
        }
        return (int)money[n];
    }
};
