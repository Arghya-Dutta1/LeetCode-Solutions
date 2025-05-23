class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long f0 = 0, f1 = -0x3f3f3f3f;
        for (auto x : nums) {
            long long tmp = f0;
            f0 = max(f0 + x, f1 + (x ^ k));
            f1 = max(f1 + x, tmp + (x ^ k));
        }
        return f0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();