class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(auto i:strs){
            string k=i;
            sort(k.begin(), k.end());
            mp[k].push_back(i);
        }
        for(auto [_, i]:mp)
            ans.push_back(i);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();