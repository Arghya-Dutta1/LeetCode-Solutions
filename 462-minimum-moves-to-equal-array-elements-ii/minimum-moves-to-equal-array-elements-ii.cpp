class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size(),m,ans=0;
        ranges::sort(nums);
        if(n%2==0)
            m=(nums[n/2-1]+nums[n/2])/2;
        else
            m=nums[n/2];
        for(auto i:nums) ans+=abs(m-i);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();