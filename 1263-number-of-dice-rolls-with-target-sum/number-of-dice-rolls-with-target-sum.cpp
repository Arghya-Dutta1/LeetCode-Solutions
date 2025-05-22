class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int mod = 1e9 + 7;
        vector<vector<int>> f(n+1, vector<int>(target+1, 0));
        f[0][0] = 1;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= min(target, i * k); ++j)
                for (int h = 1; h <= min(j, k); ++h)
                    f[i][j] = (f[i][j] + f[i - 1][j - h]) % mod;
        return f[n][target];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();