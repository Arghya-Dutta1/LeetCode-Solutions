class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        ranges::sort(nums);
        int mod = 1e9 + 7, n = nums.size();
        vector<int> fastExp(n + 1);
        fastExp[0] = 1;
        for (int i = 1; i <= n; ++i)
            fastExp[i] = (fastExp[i - 1] * 2) % mod;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] * 2L > target)
                break;
            int j = upper_bound(nums.begin() + i + 1, nums.end(), target - nums[i]) - nums.begin() - 1;
            count = (count + fastExp[j - i]) % mod;
        }
        return count;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();