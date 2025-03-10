class Solution {
public:
    vector<vector<long long>> dp;
    int solve(vector<vector<int>>& grid, int i, int j){
        if(i>=grid.size() || j>=grid[0].size())
            return INT_MAX;
        if(i==grid.size()-1 && j==grid[0].size()-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=(long long)grid[i][j]+min(solve(grid, i, j+1), solve(grid, i+1, j));
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        dp.resize(m, vector<long long>(n, -1));
        return solve(grid, 0, 0);
    }
};