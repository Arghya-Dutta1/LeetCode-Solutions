class Solution {
public:
    string removeStars(string s) {
        string ans="";
        for(auto i:s)
            if(i=='*') ans.pop_back();
            else ans.push_back(i);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();