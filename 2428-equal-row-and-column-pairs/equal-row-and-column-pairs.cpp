class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(), ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                int k=0;
                for(;k<n;k++)
                    if(grid[i][k]!=grid[k][j]) break;
                if(k==n) ans++;
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