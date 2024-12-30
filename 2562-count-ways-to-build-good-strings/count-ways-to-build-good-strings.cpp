class Solution {
public:
    int countGoodStrings(int l, int h, int z, int o) {
        const int mod=1e9+7;
        int ans=0;
        vector<int> dp(h+1);
        dp[0]=1;

        for(int i=1;i<=h;i++){
            if(i>=z) dp[i]=(dp[i]+dp[i-z])%mod;
            if(i>=o) dp[i]=(dp[i]+dp[i-o])%mod;
            if(i>=l) ans=(ans+dp[i])%mod;
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