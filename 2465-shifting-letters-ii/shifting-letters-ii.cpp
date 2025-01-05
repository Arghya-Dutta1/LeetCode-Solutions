class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int shift=0;
        vector<int> t(s.size() + 1);

        for(auto& sh:shifts){
            int st=sh[0], e=sh[1], dir=sh[2];
            int d=dir?1:-1;
            t[st]+=d;
            t[e+1]-=d;
        }

        for(int i=0; i<s.size(); i++){
            shift=(shift+t[i])%26;
            s[i]='a'+(s[i] -'a'+shift+26)%26;
        }

        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();