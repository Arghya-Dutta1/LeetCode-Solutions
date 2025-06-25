class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(auto i:s) mp[i]++;
        int f=mp[s[0]];
        for(auto [i,j]:mp)
            if(j!=f) return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();