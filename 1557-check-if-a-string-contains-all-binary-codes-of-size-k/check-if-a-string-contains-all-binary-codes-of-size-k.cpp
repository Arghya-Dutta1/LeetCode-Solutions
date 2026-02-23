class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int stringLength = s.size(), totalPossibleCodes = 1 << k;if (stringLength - k + 1 < totalPossibleCodes)
            return false;
        unordered_set<string> uniqueSubstrings;
        for (int i = 0; i + k <= stringLength; ++i) {
            uniqueSubstrings.insert(move(s.substr(i, k)));
        }
        return uniqueSubstrings.size() == totalPossibleCodes;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();