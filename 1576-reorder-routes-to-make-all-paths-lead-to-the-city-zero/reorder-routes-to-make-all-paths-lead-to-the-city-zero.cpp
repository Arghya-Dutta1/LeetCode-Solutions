class Solution {
public:
    int dfs(vector<vector<int>>& g, int u, int prev){
        int ans=0;
        for(auto v:g[u]){
            if(abs(v)==prev) continue;
            if(v>0) ans++;
            ans+=dfs(g, abs(v), u);
        }
        return ans;
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> g(n);
        for(auto& i:connections){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(-i[0]);
        }

        return dfs(g, 0, -1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();