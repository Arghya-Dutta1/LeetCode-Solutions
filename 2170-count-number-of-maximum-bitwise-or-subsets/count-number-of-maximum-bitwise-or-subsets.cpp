class Solution {
public:

    int solve(vector<int>& nums, int idx, int curOR, int maxOR){
        if(idx==nums.size()){
            if(curOR==maxOR)
                return 1;
            return 0;
        }

        int t=solve(nums, idx+1, curOR | nums[idx], maxOR);
        int nt=solve(nums, idx+1, curOR, maxOR);

        return t+nt;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0;
        for(auto x:nums) maxOR|=x;

        return solve(nums, 0, 0, maxOR);
    }
};