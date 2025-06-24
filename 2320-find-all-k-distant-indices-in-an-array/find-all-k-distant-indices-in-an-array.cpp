class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (abs(i - j) <= k && nums[j] == key) {
                    ans.push_back(i);
                    break;
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