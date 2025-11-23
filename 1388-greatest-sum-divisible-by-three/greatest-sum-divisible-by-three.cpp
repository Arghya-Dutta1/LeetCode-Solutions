class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3);
        for (auto num : nums)
            for (auto sum : vector<int>(dp))
                dp[(sum + num) % 3] = max(dp[(sum + num) % 3], sum + num);
        return dp[0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();