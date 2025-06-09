class Solution {
public:
    long getGap(long a, long b, long n) {
        long gap = 0;
        while (a <= n) {
            gap += min(n + 1, b) - a;
            a *= 10;
            b *= 10;
        }
        return gap;
    }
    
    int findKthNumber(int n, int k) {
        long ans = 1;

        for (int i = 1; i < k;) {
            const long gap = getGap(ans, ans + 1, n);
            if (i + gap <= k) {
                i += gap;
                ++ans;
            } else {
                ++i;
                ans *= 10;
            }
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