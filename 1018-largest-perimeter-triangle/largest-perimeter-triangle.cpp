class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        ranges::sort(nums);

        for (int i = nums.size() - 1; i > 1; --i)
            if (nums[i - 2] + nums[i - 1] > nums[i])
                return nums[i - 2] + nums[i - 1] + nums[i];

        return 0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();