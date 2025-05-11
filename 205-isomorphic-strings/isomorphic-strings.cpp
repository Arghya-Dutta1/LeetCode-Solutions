class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mpS[256] = {0}, mpT[256] = {0};
        int length = s.size();
        for (int i = 0; i < length; ++i) {
            char chS = s[i], chT = t[i];
            if (mpS[chS] != mpT[chT])
                return false;
            mpS[chS] = mpT[chT] = i + 1;
        }
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();