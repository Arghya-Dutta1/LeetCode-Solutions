class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int, int> mp1, mp2;
        for(auto c:s) mp1[c]++;
        for(auto c:t) mp2[c]++;
        if(mp1.size()!=mp2.size()) return false;
        
        auto i1=mp1.begin(), i2=mp2.begin();
        while(i1!=mp1.end() && i2!=mp2.end()){
            if((*i1).first!=(*i2).first || (*i1).second!=(*i2).second) return false;
            i1++;
            i2++;
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