class Solution {
public:
    static const long long MOD = 1e9 + 7;
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, long long> groups;
        for (auto& p : points) {
            int y = p[1];
            groups[y]++;
        }

        vector<long long> cnt;
        cnt.reserve(groups.size());

        vector<int> ys;
        ys.reserve(groups.size());
        for (auto& kv : groups)
            ys.push_back(kv.first);
        sort(ys.begin(), ys.end());

        for (int y : ys) {
            long long c = groups[y];
            cnt.push_back((c * (c - 1) / 2) % MOD);
        }

        long long ans = 0, s = 0;
        int n = cnt.size();

        for (int i = 0; i < n; i++) {
            ans = (ans + cnt[i] * s) % MOD;
            s = (s + cnt[i]) % MOD;
        }

        return ans;
    }
};