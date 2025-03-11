class Solution {
public:
    int minVal(vector<int>& mp){
        return ranges::min(mp);
    }
    int numberOfSubstrings(string s) {
        int ans=0;
        vector<int> mp(3,-1);
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']=i;
            ans+=1+minVal(mp);
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