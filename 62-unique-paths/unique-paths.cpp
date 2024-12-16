class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--)
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
        return dp[0][0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();