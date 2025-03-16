class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), m = queries.size();
        bool z = true;
        for (auto x : nums) {
            if(x != 0) { z = false; break; }
        }
        if(z) return 0;

        int lo = 1, hi = m, res = -1;
        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            bool poss = true;
            for (int j = 0; j < n; j++) {
                int tar = nums[j];
                bitset<1001> dp;
                dp.reset();
                dp[0] = 1;
                for (int i = 0; i < mid; i++) {
                    if(j < queries[i][0] || j > queries[i][1]) continue;
                    dp |= (dp << queries[i][2]);
                }
                if(!dp[tar]) { poss = false; break; }
            }
            if(poss) { res = mid; hi = mid - 1; }
            else lo = mid + 1;
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