class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i==grid.size() || j<0 || j==grid[0].size() || grid[i][j]==0)
            return 0;
        int fish=grid[i][j];
        grid[i][j]=0;
        return fish + dfs(grid, i+1, j) + dfs(grid, i-1, j) + dfs(grid, i, j+1) + dfs(grid, i, j-1);
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]!=0){
                    int s=dfs(grid, i, j);
                    ans=max(ans, s);
                }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();