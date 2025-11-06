class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        vector<int> parent(c + 1);
        iota(parent.begin(), parent.end(), 0);
        function<int(int)> find = [&](int x) {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        };
        auto unite = [&](int x, int y) {
            int px = find(x), py = find(y);
            if (px != py) parent[py] = px;
        };
        for (auto& conn : connections) unite(conn[0], conn[1]);
        unordered_map<int, set<int>> component_operational;
        for (int i = 1; i <= c; ++i) component_operational[find(i)].insert(i);
        vector<bool> online(c + 1, true);
        vector<int> res;
        for (auto& q : queries) {
            int type = q[0], x = q[1];
            if (type == 1) {
                if (online[x]) res.push_back(x);
                else {
                    int comp = find(x);
                    auto& s = component_operational[comp];
                    res.push_back(s.empty() ? -1 : *s.begin());
                }
            } else {
                if (online[x]) {
                    online[x] = false;
                    component_operational[find(x)].erase(x);
                }
            }
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