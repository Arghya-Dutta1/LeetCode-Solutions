class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";

        for(int i=0; i<strs[0].size(); i++)
            for(int j=1; j<strs.size(); j++)
                if(i==strs[j].size() || strs[j][i]!=strs[0][i])
                    return strs[0].substr(0, i);

        return strs[0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();