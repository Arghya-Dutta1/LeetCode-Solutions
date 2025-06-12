class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size(), ans=abs(nums[n-1]-nums[0]);
        for(int i=1;i<n;i++)
            ans=max(ans, abs(nums[i]-nums[i-1]));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();