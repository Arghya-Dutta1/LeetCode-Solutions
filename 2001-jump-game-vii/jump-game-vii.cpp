class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int count = 0;
        vector<bool> dp(s.length());
        dp[0] = true;

        for (int i = minJump; i < s.length(); ++i) {
            count += dp[i - minJump];
            if (i - maxJump > 0)
                count -= dp[i - maxJump - 1];
            dp[i] = count && s[i] == '0';
        }
        return dp.back();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();