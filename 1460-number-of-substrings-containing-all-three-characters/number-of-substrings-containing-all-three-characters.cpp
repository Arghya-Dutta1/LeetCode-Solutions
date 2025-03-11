class Solution {
public:
    int minMap(unordered_map<char, int>& mp){
        int mn=INT_MAX;
        for(auto [i,j]:mp)
            mn=min(mn, j);
        return mn;
    }

    int numberOfSubstrings(string s) {
        int ans=0;
        unordered_map<char, int> mp={{'a',-1}, {'b',-1}, {'c',-1}};
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
            ans+=1+minMap(mp);
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();