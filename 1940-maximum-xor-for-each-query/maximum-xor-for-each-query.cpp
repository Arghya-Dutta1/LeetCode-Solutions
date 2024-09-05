class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mB) {
        int xors=0, mb=(1<<mB)-1;
        vector<int> ans;
        for(auto i:nums){
            xors^=i;
            ans.push_back(xors^mb);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();