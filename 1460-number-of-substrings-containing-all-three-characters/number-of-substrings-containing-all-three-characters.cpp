class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        vector<int> mp(3,-1);
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']=i;
            ans+=1+min({mp[0], mp[1], mp[2]});
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