class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> pre(m, vector<int>(n));
        for(int i=0;i<m;i++)
            pre[i][0]=grid[i][0];
        for(int i=0;i<m;i++)
            for(int j=1;j<n;j++)
                pre[i][j]=pre[i][j-1]+grid[i][j];
        int ans=0;
        for(int i=0;i<m-2;i++)
            for(int j=0;j<n-2;j++){
                int s=pre[i][j+2]-(j!=0?pre[i][j-1]:0);
                s+=grid[i+1][j+1];
                s+=pre[i+2][j+2]-(j!=0?pre[i+2][j-1]:0);
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