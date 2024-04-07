class Solution{
		
	public:
	int maxDotProduct(int n, int m, int a[], int b[])
    {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(0, 0, n, m, a, b, dp);
    }
    int solve(int i, int j, int n, int m, int a[], int b[], vector<vector<int>> &dp)
    {
        if (j == m)
        {
            return 0;
        }
        if (i == n)
        {
            return INT_MIN;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int no_take = 0 + solve(i + 1, j, n, m, a, b, dp);
        int take = a[i] * b[j] + solve(i + 1, j + 1, n, m, a, b, dp);
        return dp[i][j] = max(no_take, take);
    }
};