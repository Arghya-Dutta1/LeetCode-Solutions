class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long ans=LONG_MAX, sum0=accumulate(grid[0].begin(), grid[0].end(), 0L), sum1=0;

        for(int i=0; i<n; i++){
            sum0-=grid[0][i];
            ans=min(ans, max(sum0, sum1));
            sum1+=grid[1][i];
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