class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0;
        for(auto c:str1)
            if(c==str2[i] || 'a'+((c-'a'+1)%26)==str2[i])
                if(++i==str2.size())
                    return true;
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();