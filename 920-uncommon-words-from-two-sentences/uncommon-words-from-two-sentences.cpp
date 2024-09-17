class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> s;
        vector<string> ans;
        s1+=" ";s2+=" ";
        string st="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' ' && i!=0){
                s[st]++;
                st="";
            }
            else
                st+=s1[i];
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]==' ' && i!=0){
                s[st]++;
                st="";
            }
            else
                st+=s2[i];
        }
        for(auto it:s)
            if(it.second==1) ans.push_back(it.first);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();