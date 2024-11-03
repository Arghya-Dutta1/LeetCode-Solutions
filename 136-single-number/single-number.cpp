class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r=0;
        for(auto &i:nums)
            r^=i;
        return r;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();