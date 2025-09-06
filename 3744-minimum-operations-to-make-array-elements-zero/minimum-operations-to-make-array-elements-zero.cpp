class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for (const vector<int>& query : queries) {
            int l = query[0], r = query[1];
            ans += (getOperations(r) - getOperations(l - 1) + 1) / 2;
        }
        return ans;
    }
    long long getOperations(int n) {
        long long res = 0, ops = 0;
        for (int powerOfFour = 1; powerOfFour <= n; powerOfFour *= 4) {
            int l = powerOfFour, r = min(n, powerOfFour * 4 - 1);
            res += static_cast<long long>(r - l + 1) * ++ops;
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