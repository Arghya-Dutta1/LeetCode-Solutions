class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), ones = ranges::count(nums, 1);
        if (ones > 0)
            return n - ones;
        int minOps = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int g = nums[i];
            for (int j = i + 1; j < n; ++j) {
                g = __gcd(g, nums[j]);
                if (g == 1) {
                    minOps = min(minOps, j - i);
                    break;
                }
            }
        }
        return minOps == INT_MAX ? -1 : minOps + n - 1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();