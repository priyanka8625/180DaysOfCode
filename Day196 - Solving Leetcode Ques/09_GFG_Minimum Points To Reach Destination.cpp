int solveTab(int m, int n, vector<vector<int>> points)
    {
        vector<vector<int>> dp(m, vector<int> (n, 0));
        int initial = 0 - points[m-1][n-1];

        // setting points for final position;

        if(initial >= 0) dp[m-1][n-1] = initial;
        else dp[m-1][n-1] = 0;
        
        dp[m-1][n-1] = 0 - points[m-1][n-1];
        
        for(int i = m - 1; i >= 0; i--)
        {
            for(int j = n - 1; j >= 0; j--)
            {

                // setting non existing positions as MAX
                int right = INT_MAX, bottom = INT_MAX;
                if(i == m-1 && j == n-1)
                    continue;
                if(i + 1 < m)
                    bottom = dp[i + 1][j];
                if(j + 1 < n)
                    right = dp[i][j + 1];
                
                int mini = min(right, bottom);
                int actual = mini - points[i][j];
                if(actual <= 0)
                {

                    // no additional points required to move ahead
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = actual;
                }
            }
        }
        return dp[0][0];
    }
    int minPoints(int m, int n, vector<vector<int>> points) 
    { 
        int ans = solveTab(m, n, points);

        // we have considered in above function that with 0         // points we can move further but in question it is               // given that we need minimum 1 point to move ahead.
        return 1 + ans;
    } 

