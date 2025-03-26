class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> g;
        for(auto& i:grid) g.insert(g.end(), i.begin(), i.end());
        ranges::sort(g);
        int r=g[0]%x;
        for(auto i:g)
            if(i%x!=r) return -1;
        int n=g.size(), ans=0, m=g[n/2];
        for(auto i:g) ans+=abs(m-i)/x;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();