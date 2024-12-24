class Solution {
    public:
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int d1 = treeDiameter(edges1);
        int d2 = treeDiameter(edges2);
        return max({d1, d2, (d1 + 1) / 2 + (d2 + 1) / 2 + 1});
    }

    int treeDiameter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<int> g[n];
        for (auto& e : edges) 
            g[e[0]].push_back(e[1]),g[e[1]].push_back(e[0]);
        
        int ans = 0, a = 0;
        auto dfs = [&](this auto&& dfs, int i, int fa, int t) -> void {
            for (int j : g[i]) 
                if (j != fa)
                    dfs(j, i, t + 1);
            if (ans < t) {
                ans = t;
                a = i;
            }                                                                                              };
            
        dfs(0, -1, 0);
        dfs(a, -1, 0);
        return ans;
    }
};
      
static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();