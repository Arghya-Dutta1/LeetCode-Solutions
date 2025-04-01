class Solution {
public:
    vector<long long> dp;
    
    long long solve(vector<vector<int>>& q, int idx) {
        if (idx >= q.size()) return 0;
        if (dp[idx] != -1) return dp[idx];

        // Take the current question
        long long take = q[idx][0] + solve(q, idx + q[idx][1] + 1);
        
        // Skip the current question
        long long notTake = solve(q, idx + 1);

        return dp[idx] = max(take, notTake);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        dp.resize(questions.size(), -1);
        return solve(questions, 0);
    }
};
