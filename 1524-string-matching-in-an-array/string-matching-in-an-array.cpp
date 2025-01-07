class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> ans;
        int n=words.size();
        for(auto w:words)
            for(int i=0;i<n;i++)
                if(words[i].find(w)!=string::npos && words[i]!=w)
                    ans.insert(w);
        return {ans.begin(), ans.end()};
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();