class Solution {
public:
    int minExtraChar(string s, vector<string>& dict) {
        int n=s.length();
        vector<int> dp(n+1, 0);
        unordered_set<string> st(dict.begin(), dict.end());

        for(int i=n-1;i>=0;i--){
            dp[i]=1+dp[i+1];
            for(int j=i;j<n;j++){
                string sub=s.substr(i, j-i+1);
                if(st.count(sub))
                    dp[i]=min(dp[i], dp[j+1]);
            }
        }
        return dp[0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();