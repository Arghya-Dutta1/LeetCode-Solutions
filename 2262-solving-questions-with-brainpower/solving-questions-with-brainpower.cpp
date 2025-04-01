class Solution {
public:
    vector<long long> dp;
    long long solve(vector<vector<int>>& q, int idx){
        if(idx>=q.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        long long t=q[idx][0]+solve(q, idx+q[idx][1]+1);
        long long nt=solve(q, idx+1);
        return dp[idx]=max(t,nt);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        dp.resize(questions.size(), -1);
        return solve(questions, 0);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();