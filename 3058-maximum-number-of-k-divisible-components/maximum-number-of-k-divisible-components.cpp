class Solution {
public:
    long dfs(vector<vector<int>>& g, int u, int pre, vector<int>& val, int k, int& ans){
        long tsum=val[u];

        for(auto v:g[u])
            if(v!=pre)
                tsum+=dfs(g, v, u, val, k, ans);
        
        if(tsum%k==0) ans++;
        return tsum;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        int ans=0;
        vector<vector<int>> g(n);
        for(auto i:edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }

        dfs(g, 0, -1, values, k, ans);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();