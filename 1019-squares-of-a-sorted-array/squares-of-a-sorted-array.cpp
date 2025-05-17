class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto& i:nums) i=i*i;
        ranges::sort(nums);
        return nums;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();