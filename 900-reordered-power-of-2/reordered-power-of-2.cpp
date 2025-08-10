class Solution {
public:
    string countDigits(int n) {
        string cnt(10, '0');
        while (n > 0) {
            cnt[n % 10]++;
            n /= 10;
        }
        return cnt;
    }
    bool reorderedPowerOf2(int n) {
        string target = countDigits(n);
        for (int i = 0; i < 31; i++) {
            if (countDigits(1 << i) == target)
                return true;
        }
        return false;
    }
};

static const int __ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();