class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                nums[i]*=2, nums[i+1]=0;
        vector<int> ans(nums.size(), 0);
        int idx=0;
        for(auto i:nums)
            if(i!=0)
                ans[idx++]=i;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();