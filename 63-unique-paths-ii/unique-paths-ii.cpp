class Solution {
public:
    vector<vector<int>> dp;
    int count(vector<vector<int>>& v, int i, int j, int m, int n){
        if(i>=m || j>=n || v[i][j]==1) return 0;
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=count(v, i+1, j, m, n)+count(v, i, j+1, m, n);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        dp.resize(m, vector<int>(n, -1));
        return count(obstacleGrid, 0, 0, m, n);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();