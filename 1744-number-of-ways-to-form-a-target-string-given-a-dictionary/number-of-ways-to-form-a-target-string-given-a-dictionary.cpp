class Solution {
public:
    int numWays(vector<string>& w, string t) {
        const int mod = 1e9+7;
        int wl = w[0].length();
        vector<long> dp(t.size() + 1);
        dp[0] = 1;

        for (int j = 0; j < wl; ++j) {
            vector<int> cnt(26);
            for (const string& s : w)
                ++cnt[s[j] - 'a'];
            for (int i = t.size(); i > 0; --i) {
                dp[i] += dp[i - 1] * cnt[t[i - 1] - 'a'];
                dp[i] %= mod;
            }
        }

        return dp[t.size()];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();