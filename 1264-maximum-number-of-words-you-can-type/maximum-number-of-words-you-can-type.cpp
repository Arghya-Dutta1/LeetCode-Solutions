class Solution {
public:
    bool canBeTyped(const string& word, const vector<bool>& broken) {
        for (const char c : word)
            if (broken[c - 'a'])
                return false;
        return true;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        int ans = 0;
        istringstream iss(text);
        vector<bool> broken(26);
        for (const char c : brokenLetters)
            broken[c - 'a'] = true;
        for (string word; iss >> word;)
            ans += canBeTyped(word, broken);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();