class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> f(n+1, 0);
        int b = 0;
        for (int i = 1; i <= n; ++i) {
            if (s[i - 1] == 'b') {
                f[i] = f[i - 1];
                ++b;
            } else {
                f[i] = min(f[i - 1] + 1, b);
            }
        }
        return f[n];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();