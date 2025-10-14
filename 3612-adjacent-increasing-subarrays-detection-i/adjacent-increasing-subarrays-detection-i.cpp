class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int increasing = 1, prevIncreasing = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1])
                ++increasing;
            else {
                prevIncreasing = increasing;
                increasing = 1;
            }
            if (increasing / 2 >= k || min(prevIncreasing, increasing) >= k)
                return true;
        }
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();