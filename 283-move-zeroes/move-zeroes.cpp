class Solution {
public:
    vector<int> solve(vector<int>& nums){
        vector<int> ans(nums.size(), 0);
        int idx=0;
        for(auto i:nums)
            if(i!=0)
                ans[idx++]=i;
        return ans;
    }
    
    void moveZeroes(vector<int>& nums) {
        nums=solve(nums);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();