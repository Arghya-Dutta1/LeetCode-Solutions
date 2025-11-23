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