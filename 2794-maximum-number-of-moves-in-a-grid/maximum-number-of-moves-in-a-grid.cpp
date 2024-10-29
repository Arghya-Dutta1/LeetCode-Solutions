class Solution {
public:
    vector<vector<int>> dp;

    int solve(vector<vector<int>>& grid, int i, int j){
        if(j==grid[0].size()-1) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int ans=0;
        if(i>0 && grid[i][j]<grid[i-1][j+1])
            ans=max(ans, 1+solve(grid, i-1, j+1));
        if(grid[i][j]<grid[i][j+1])
            ans=max(ans, 1+solve(grid, i, j+1));
        if(i<grid.size()-1 && grid[i][j]<grid[i+1][j+1])
            ans=max(ans, 1+solve(grid, i+1, j+1));
        
        return dp[i][j]=ans;
    }

    int maxMoves(vector<vector<int>>& grid) {
        int ans=0;
        dp.resize(grid.size()+1, vector<int>(grid[0].size()+1, -1));
        for(int i=0;i<grid.size();i++)
            ans=max(ans, solve(grid, i, 0));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();