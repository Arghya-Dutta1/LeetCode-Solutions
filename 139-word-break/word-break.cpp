class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> word_set(wordDict.begin(), wordDict.end());
        int n=s.size();
        vector<bool> canSegment(n+1, false);
        canSegment[0] = true;

        for (int i = 1; i <= n; ++i)
            for (int j = 0; j < i; ++j)
                if (canSegment[j] && word_set.count(s.substr(j, i - j))) {
                    canSegment[i] = true;
                    break;
                }
      
        return canSegment[n];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();