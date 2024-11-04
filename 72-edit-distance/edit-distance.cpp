class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        for(int i = 0; i <= m; i++) {
            dp[n][i] = m - i;
        }
        for(int j = 0; j <= n; j++) {
            dp[j][m] = n - j;
        }
        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {
                int res = 1e9;
                if(word1[i] == word2[j]) {
                    res = dp[i+1][j+1];
                }else {
                    res = min(res,1 + dp[i+1][j]);
                    res = min(res,1 + dp[i+1][j+1]);
                    res = min(res, 1 + dp[i][j+1]);
                }
                dp[i][j] = res;
            }
        }
        return dp[0][0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();