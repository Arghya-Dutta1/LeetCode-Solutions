class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0], s=nums[0];
        for(int i=1;i<nums.size();i++){
            s=max(s, 0)+nums[i];
            mx=max(mx, s);
        }
        return mx;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();