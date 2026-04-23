class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long> ans(nums.size());
        unordered_map<int, vector<int>> numToIndices;

        for (int i = 0; i < nums.size(); ++i)
            numToIndices[nums[i]].push_back(i);

        for (const auto& [_, indices] : numToIndices) {
            const int n = indices.size();
            long sumSoFar = accumulate(indices.begin(), indices.end(), 0L);
            int prevIndex = 0;
            for (int i = 0; i < n; ++i) {
                sumSoFar += (i - 1) * (indices[i] - prevIndex);
                sumSoFar -= (n - 1 - i) * (indices[i] - prevIndex);
                ans[indices[i]] = sumSoFar;
                prevIndex = indices[i];
            }
        }

        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();