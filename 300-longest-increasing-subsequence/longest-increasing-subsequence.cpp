class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis;
        lis.push_back(nums[0]);

        for (int i = 1; i < n; i++) {
            if (nums[i] > lis.back()) lis.push_back(nums[i]);
            else {
                int j = lower_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
                lis[j] = nums[i];
            }
        }
        return lis.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();