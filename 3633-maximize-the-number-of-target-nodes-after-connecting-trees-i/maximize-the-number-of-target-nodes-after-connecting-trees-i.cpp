class Solution {
private:
    int n;
    int m;
    array<int, 4> cnt;
    vector<vector<int>> graph1;
    vector<vector<int>> graph2;
    vector<int> color;
    int cur;
    int _k;
    void Dfs1(int x, int fa, int key) {
        if (key <= _k) {
            cur++;
            for (const auto& y : graph1[x]) {
                if (y != fa) {
                    Dfs1(y, x, key + 1);
                }
            }
        }
    }
    void Dfs2(int x, int fa, int key) {
        if (key <= _k) {
            cur++;
            for (const auto& y : graph2[x]) {
                if (y != fa) {
                    Dfs2(y, x, key + 1);
                }
            }
        }
    }

public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1,
                               vector<vector<int>>& edges2, int k) {
        _k = k;
        n = edges1.size() + 1;
        m = edges2.size() + 1;
        cnt = {};
        graph1.assign(n, {});
        graph2.assign(m, {});
        color.resize(n);
        int add = 0;
        for (const auto& edge : edges1) {
            int a = edge[0], b = edge[1];
            graph1[a].push_back(b);
            graph1[b].push_back(a);
        }
        for (const auto& edge : edges2) {
            int a = edge[0], b = edge[1];
            graph2[a].push_back(b);
            graph2[b].push_back(a);
        }
        for (int i = 0; i < m; i++) {
            cur = 0;
            Dfs2(i, -1, 1);
            add = max(add, cur);
        }
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            cur = add;
            Dfs1(i, -1, 0);
            res[i] = cur;
        }
        return res;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();