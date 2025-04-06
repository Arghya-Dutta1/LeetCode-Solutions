class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        ranges::sort(nums);
        int n = nums.size();
        vector<int> subsetSizes(n, 1);
        int maxSubsetIndex = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0) {
                    subsetSizes[i] = max(subsetSizes[i], subsetSizes[j] + 1);
                }
            }
            if (subsetSizes[maxSubsetIndex] < subsetSizes[i]) {
                maxSubsetIndex = i;
            }
        }

        int currentSize = subsetSizes[maxSubsetIndex];
        vector<int> largestSubset;
        for (int i = maxSubsetIndex; currentSize > 0; --i) {
            if (nums[maxSubsetIndex] % nums[i] == 0 && subsetSizes[i] == currentSize) {
                largestSubset.push_back(nums[i]);
                maxSubsetIndex = i;
                --currentSize;
            }
        }
        return largestSubset;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();