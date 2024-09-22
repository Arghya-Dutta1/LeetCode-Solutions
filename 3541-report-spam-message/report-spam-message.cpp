class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> s(bannedWords.begin(), bannedWords.end());
        unordered_map<string, int> mp;
        for(auto w:message)
            if(s.find(w)!=s.end())
                mp[w]++;
        auto it=mp.begin();
        return mp.size()>=2 || (mp.size()==1 && it->second>1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();