class Solution {
public:
    vector<int> dp;
    int findMinCoins(vector<int>& coins, int amt){
        if(amt==0) return 0;
        if(amt<0) return INT_MAX;

        if(dp[amt]!=-1) return dp[amt];

        int ans=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int pos=findMinCoins(coins, amt-coins[i]);
            if(pos==INT_MAX) continue;
            ans=min(ans, pos+1);
        }

        return dp[amt]=ans;
    }

    int coinChange(vector<int>& coins, int amount) {
        dp.resize(amount+1, -1);
        int ans=findMinCoins(coins, amount);
        return ans!=INT_MAX?ans:-1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();