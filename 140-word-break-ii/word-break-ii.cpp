class Solution {
public:
    vector<vector<string>> ans;
    void breakWord(string s, set<string>& wd, vector<string>& a, int ind){
        if(ind==s.size()){
            ans.push_back(a);
            return;
        }
        string c="";
        for(int i=ind;i<s.size();i++){
            c+=s[i];
            if(wd.count(c)){
                a.push_back(c);
                breakWord(s, wd, a, i+1);
                a.pop_back();
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> a;
        set<string> mp;
        for(int i=0;i<wordDict.size();i++)
            mp.insert(wordDict[i]);
        breakWord(s, mp, a, 0);

        vector<string> an;
        for(auto i:ans){
            string t="";
            for(int j=0;j<i.size()-1;j++)
                t+=i[j]+" ";
            t+=i.back();
            an.push_back(t);
        }
        return an;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();