class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [&](const auto& a, const auto& b) {
            return a[0] - a[1] < b[0] - b[1];
        });
        int ans = 0, cur = 0;
        for (auto& task : tasks) {
            int a = task[0], m = task[1];
            if (cur < m) {
                ans += m - cur;
                cur = m;
            }
            cur -= a;
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