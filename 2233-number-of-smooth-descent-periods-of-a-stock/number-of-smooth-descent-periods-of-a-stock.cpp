class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long ans = 1; 
        int dp = 1;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] == prices[i - 1] - 1)
                ++dp;
            else
                dp = 1;
            ans += dp;
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