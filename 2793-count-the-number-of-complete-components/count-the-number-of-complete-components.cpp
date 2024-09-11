class Solution {
public:
    vector<int> g[50];
    vector<bool> vis;

    pair<int, int> dfs(int v){
        vis[v]=true;
        int x=1, y=g[v].size();
        for(auto c:g[v])
            if(!vis[c]){
                auto [a,b]=dfs(c);
                x+=a;
                y+=b;
            }
        return {x,y};
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int c=0;
        vis.resize(n, false);
        for(auto i:edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        for(int i=0;i<n;i++)
            if(!vis[i]){
                auto [a,b]=dfs(i);
                if(a*(a-1)==b) c++;
            }
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();