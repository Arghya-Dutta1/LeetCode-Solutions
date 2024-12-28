class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size() - k + 1;
        vector<int> sums(n), l(n), r(n), ans{-1, -1, -1};

        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (i >= k) sum -= nums[i - k];
            if (i >= k - 1) sums[i - k + 1] = sum;
        }

        int maxIdx = 0;
        for (int i = 0; i < n; ++i) {
            if (sums[i] > sums[maxIdx]) maxIdx = i;
            l[i] = maxIdx;
        }

        maxIdx = n - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (sums[i] >= sums[maxIdx]) maxIdx = i;
            r[i] = maxIdx;
        }

        for (int i = k; i < n - k; ++i)
            if (ans[0] == -1 || sums[ans[0]] + sums[ans[1]] + sums[ans[2]] < 
                                  sums[l[i - k]] + sums[i] + sums[r[i + k]]) {
                ans[0] = l[i - k];
                ans[1] = i;
                ans[2] = r[i + k];
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