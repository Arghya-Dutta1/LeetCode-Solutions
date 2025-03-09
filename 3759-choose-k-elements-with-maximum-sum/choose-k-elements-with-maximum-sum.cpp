class Solution {
public:
    vector<long long> findMaxSum(vector<int>& A, vector<int>& B, int K) {
        int n = A.size();
        vector<long long> ans(n);
        vector<array<long long, 3>> v(n);
        for (int i = 0; i < n; i++) v[i] = {A[i], B[i], i};
        sort(v.begin(), v.end(), [](auto& a, auto& b) { return a[0] < b[0]; });
        priority_queue<long long, vector<long long>, greater<long long>> mh;
        long long s = 0;
        for (int i = 0; i < n;) {
            long long x = v[i][0];
            int st = i;
            while (i < n && v[i][0] == x) i++;
            for (int j = st; j < i; j++) ans[v[j][2]] = s;
            for (int j = st; j < i; j++) {
                long long val = v[j][1];
                if ((int)mh.size() < K) {
                    mh.push(val);
                    s += val;
                } else if (!mh.empty() && val > mh.top()) {
                    s -= mh.top();
                    mh.pop();
                    mh.push(val);
                    s += val;
                }
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