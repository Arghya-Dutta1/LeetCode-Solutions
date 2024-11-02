class Solution {
public:
    int lcs(vector<vector<int>>& dp, string& t1, string& t2, int i, int j){
        if(i==t1.size() || j==t2.size()) return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];

        if(t1[i]!=t2[j])
            return dp[i][j]=max(lcs(dp, t1, t2, i+1, j), lcs(dp, t1, t2, i, j+1));
        return dp[i][j]=1+lcs(dp, t1, t2, i+1, j+1);
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(), n=text2.size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return lcs(dp, text1, text2, 0, 0);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();