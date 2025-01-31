class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int& area){
        if(i<0 || i==grid.size() || j<0 || j==grid[0].size()) return;
        if(grid[i][j]!=1) return;
        area+=1;
        grid[i][j]=2;
        dfs(grid, i+1, j, area);
        dfs(grid, i-1, j, area);
        dfs(grid, i, j+1, area);
        dfs(grid, i, j-1, area);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1){
                    int area=0;
                    dfs(grid,i,j,area);
                    ans=max(ans, area);
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