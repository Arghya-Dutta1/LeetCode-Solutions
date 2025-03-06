class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n=grid.size();
        unordered_map<int, int> mp;
        for(auto& i:grid)
            for(auto j:i)
                mp[j]++;
        for(auto [i,j]:mp)
            if(j==2)
                ans.push_back(i);
        for(int i=1;i<=n*n;i++)
            if(!mp.count(i)){
                ans.push_back(i);
                break;
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