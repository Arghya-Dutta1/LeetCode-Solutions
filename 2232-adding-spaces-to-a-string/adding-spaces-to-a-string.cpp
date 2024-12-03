class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(idx<spaces.size() && i==spaces[idx]){
                idx++;
                ans+=" ";
            }
            ans+=s[i];
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