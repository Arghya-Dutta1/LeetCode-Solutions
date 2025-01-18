class Solution {
public:
    int coin(vector<int>& c, vector<vector<int>>& dp, int amt, int sm, int j){
        if(j==c.size()){    
            if(amt==sm) return 1;
            return 0;
        }
        if(dp[sm][j]!=-1) return dp[sm][j];
        int a=coin(c, dp, amt, sm, j+1);
        int b=0;
        if(sm+c[j]<=amt)
            b=coin(c, dp, amt, sm+c[j], j);
        return dp[sm][j]=a+b;            
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(amount+1, vector<int>(coins.size(), -1));
        return coin(coins, dp, amount, 0, 0);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();