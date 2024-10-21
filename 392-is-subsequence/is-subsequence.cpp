class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool f=true;
        int i, j=0;
        for(i=0; i<t.size(); i++)
            if(t[i]==s[j])
                j++;
        return j==s.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();