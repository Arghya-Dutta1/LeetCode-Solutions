class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), ans=0;
        vector<int> rows(m), cols(n);

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1){
                    rows[i]++;
                    cols[j]++;
                }
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1 && (rows[i]>1 || cols[j]>1))
                    ans++;
        
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();