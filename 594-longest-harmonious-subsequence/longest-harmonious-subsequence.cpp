class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        ranges::sort(nums);
        for(int i=1;i<nums.size();i++)
            if(nums[i]-nums[i-1]==1)
                ans=max(ans, mp[nums[i]]+mp[nums[i-1]]);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();