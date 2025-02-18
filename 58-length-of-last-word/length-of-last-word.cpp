class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int i=0, c=0;
        while(s[i]==' ')
            i++;
        while(i<s.size() && s[i]!=' ')
            c++, i++;
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();