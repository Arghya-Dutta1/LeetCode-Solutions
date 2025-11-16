class Solution {
public:
    int numSub(string s) {
        int kMod = 1'000'000'007;
        int ans = 0, l = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0')
                l = i;
            ans = (ans + i - l) % kMod;
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