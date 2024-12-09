class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(), ans=0;
        map<vector<int>, int> mp;
        for(auto& i:grid) mp[i]++;
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<n;j++) v.push_back(grid[j][i]);
            ans+=mp[v];
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