class Solution {
public:
    vector<vector<int>> dp;

    int solve(vector<int>& nums, int idx, int curOR, int maxOR){
        if(idx==nums.size()){
            if(curOR==maxOR)
                return 1;
            return 0;
        }

        if(dp[idx][curOR]!=-1) return dp[idx][curOR];

        int t=solve(nums, idx+1, curOR | nums[idx], maxOR);
        int nt=solve(nums, idx+1, curOR, maxOR);

        return dp[idx][curOR]=t+nt;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0;
        for(auto x:nums) maxOR|=x;
        dp.resize(nums.size()+1, vector<int>(maxOR+1, -1));
        return solve(nums, 0, 0, maxOR);
    }
};