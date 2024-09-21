class Solution {
public:
    string shortestPalindrome(string s) {
        string r={s.rbegin(), s.rend()};
        string_view sv_s(s);
        string_view sv_r(r);
        for(int i=0;i<r.length();i++)
            if (sv_s.substr(0, s.length() - i) == sv_r.substr(i))
                return r.substr(0, i) + s;
        return r+s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();