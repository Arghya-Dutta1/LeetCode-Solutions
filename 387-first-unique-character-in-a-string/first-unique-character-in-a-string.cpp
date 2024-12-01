class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(auto i:s) mp[i]++;
        for(int i=0;i<s.size();i++)
            if(mp[s[i]]==1) return i;
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();