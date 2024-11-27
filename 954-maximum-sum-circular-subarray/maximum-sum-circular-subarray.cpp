class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tsum=0, cmxsum=0, cmnsum=0, mxsum=INT_MIN, mnsum=INT_MAX;
        for(auto i:nums){
            tsum+=i;
            cmxsum=max(cmxsum+i, i);
            cmnsum=min(cmnsum+i, i);
            mxsum=max(mxsum, cmxsum);
            mnsum=min(mnsum, cmnsum);
        }
        return mxsum<0?mxsum:max(mxsum, tsum-mnsum);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();