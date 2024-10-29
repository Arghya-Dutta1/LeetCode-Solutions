class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+2);
        dp[n+1]=0;
        dp[n]=0;
        for(int i=n-1;i>=0;i--)
            dp[i]=max(dp[i+1], dp[i+2] + nums[i]);
        return dp[0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();