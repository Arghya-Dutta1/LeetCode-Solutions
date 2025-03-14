class Solution {
public:
    vector<vector<int>> dp;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        dp.resize(m+1, vector<int>(n+1, 0));
        dp[0][1]=1;
        // dp[1][0]=1;

        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                if(!obstacleGrid[i-1][j-1])
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
        return dp[m][n];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();