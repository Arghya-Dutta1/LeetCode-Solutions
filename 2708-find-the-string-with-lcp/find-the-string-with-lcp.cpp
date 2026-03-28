class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        int n = lcp.size();
        char nonLetter = 'a' - 1, c = nonLetter;
        vector<char> word(n, nonLetter);

        for (int i = 0; i < n; ++i) {
            if (word[i] != nonLetter)
                continue;
            if (++c > 'z')
                return "";
            for (int j = i; j < n; ++j)
                if (lcp[i][j] > 0)
                    word[j] = c;
        }

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                int nextLcp = i + 1 < n && j + 1 < n ? lcp[i + 1][j + 1] : 0;
                int currLcp = word[i] == word[j] ? 1 + nextLcp : 0;
                if (lcp[i][j] != currLcp)
                    return "";
            }

        string ans;
        for (auto c : word)
            ans += c;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();