class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int ans = 0, increasing = 1, prevIncreasing = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1])
                ++increasing;
            else {
                prevIncreasing = increasing;
                increasing = 1;
            }
            ans = max(ans, increasing / 2);
            ans = max(ans, min(prevIncreasing, increasing));
        }
        return ans;
    }
};