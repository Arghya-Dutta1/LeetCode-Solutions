class Solution {
public:
    int countPartitions(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0) % 2 == 0 ? nums.size() - 1 : 0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();