class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mB) {
        int n=nums.size(), xors=0, mb=(1<<mB)-1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            xors^=nums[i];
            ans[n-i-1]=xors^mb;
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