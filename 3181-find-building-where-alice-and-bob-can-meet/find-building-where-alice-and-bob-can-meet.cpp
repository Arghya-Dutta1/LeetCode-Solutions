struct Q {
    int i, a, b;
};

class Solution {
public:
    vector<Q> getIndexedQueries(const vector<vector<int>>& q) {
        vector<Q> iq;
        for (int i = 0; i < q.size(); ++i) {
            int a = min(q[i][0], q[i][1]), b = max(q[i][0], q[i][1]);
            iq.push_back({i, a, b});
        }
        ranges::sort(iq, [](const Q& x, const Q& y) { return x.b > y.b; });
        return iq;
    }

    vector<int> leftmostBuildingQueries(vector<int>& h, vector<vector<int>>& q) {
        vector<int> ans(q.size(), -1), st;
        int hi = h.size() - 1;
        for (const auto& [qi, a, b] : getIndexedQueries(q)) {
            if (a == b || h[a] < h[b]) {
                ans[qi] = b;
            } else {
                while (hi > b) {
                    while (!st.empty() && h[st.back()] <= h[hi]) st.pop_back();
                    st.push_back(hi--);
                }
                auto it = upper_bound(st.rbegin(), st.rend(), a, [&](int x, int y) { return h[x] < h[y]; });
                if (it != st.rend()) ans[qi] = *it;
            }
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