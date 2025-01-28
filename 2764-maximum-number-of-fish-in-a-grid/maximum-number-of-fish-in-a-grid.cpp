class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int& s){
        if(i<0 || i==grid.size() || j<0 || j==grid[0].size() || grid[i][j]==0)
            return;

        s+=grid[i][j];
        grid[i][j]=0;

        dfs(grid, i+1, j, s);
        dfs(grid, i-1, j, s);
        dfs(grid, i, j+1, s);
        dfs(grid, i, j-1, s);
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]!=0){
                    int s=0;
                    dfs(grid, i, j, s);
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