class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0, prevEquals = 0, currEquals = 1;
        for (int i = 0; i + 1 < s.length(); ++i)
            if (s[i] == s[i + 1])
                ++currEquals;
            else {
                ans += min(prevEquals, currEquals);
                prevEquals = currEquals;
                currEquals = 1;
            }
        return ans + min(prevEquals, currEquals);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();