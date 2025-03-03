class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(), nums.end(), target);
        return distance(nums.begin(), it);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();