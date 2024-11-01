class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        for(auto i:s)
            if(ans.size()<2 || ans.back()!=i || ans[ans.size()-2]!=i)
                ans+=i;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();