class Solution {
public:
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<int> dp(n, 1);
        vector<int> parent(n, -1);
        int maxLen = 1, lastIdx = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i] != groups[j] &&
                    words[i].size() == words[j].size() &&
                    hammingDistance(words[i], words[j]) == 1) {
                    
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        parent[i] = j;
                    }
                }
            }
            if (dp[i] > maxLen) {
                maxLen = dp[i];
                lastIdx = i;
            }
        }
        vector<string> result;
        while (lastIdx != -1) {
            result.push_back(words[lastIdx]);
            lastIdx = parent[lastIdx];
        }
        reverse(result.begin(), result.end());
        return result;
    }

private:
    int hammingDistance(const string& a, const string& b) {
        int dist = 0;
        for (int i = 0; i < a.size(); ++i)
            if (a[i] != b[i])
                ++dist;
        return dist;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();