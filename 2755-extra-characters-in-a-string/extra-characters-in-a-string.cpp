class Solution {
public:
    vector<int> dp;
    int solve(int i, int n, string s, unordered_set<string>& st){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];

        int ans=1+solve(i+1, n, s, st);

        for(int j=i;j<n;j++){
            string sub=s.substr(i, j-i+1);
            if(st.count(sub))
                ans=min(ans, solve(j+1, n, s, st));
        }

        return dp[i]=ans;
    }
    int minExtraChar(string s, vector<string>& dict) {
        int n=s.length();
        dp.resize(n, -1);
        unordered_set<string> st(dict.begin(), dict.end());
        return solve(0, n, s, st);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();