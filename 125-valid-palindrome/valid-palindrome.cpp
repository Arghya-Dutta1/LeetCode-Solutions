class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto i:s)
            if(isalnum(i))
                s1.push_back(tolower(i));
        s=s1;
        int l=0, r=s.size()-1;
        while(l<=r)
            if(s[l++]!=s[r--])
                return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();