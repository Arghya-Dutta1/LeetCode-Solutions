class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans=INT_MIN, mx=0, mn=0;
        for(auto i:nums){
            mx=max(i, mx+i);
            mn=min(i, mn+i);
            ans=max({ans, mx, -mn});
        } 
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();