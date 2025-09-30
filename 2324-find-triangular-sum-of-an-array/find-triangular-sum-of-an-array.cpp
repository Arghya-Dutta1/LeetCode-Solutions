class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for (int sz = nums.size(); sz > 0; --sz)
            for (int i = 0; i + 1 < sz; ++i)
                nums[i] = (nums[i] + nums[i + 1]) % 10;
        return nums[0];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();