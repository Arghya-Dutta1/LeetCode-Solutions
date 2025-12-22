class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int k = strs[0].length();
        vector<int> dp(k, 1);

        for (int i = 1; i < k; ++i)
            for (int j = 0; j < i; ++j)
                if (ranges::all_of(strs, [&](const string& s) { return s[j] <= s[i]; }))
                    dp[i] = max(dp[i], dp[j] + 1);

        return k - ranges::max(dp);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();