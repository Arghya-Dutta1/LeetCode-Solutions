class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
    int ans = 1;
    int increasing = 1;
    int decreasing = 1;

    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] > nums[i - 1]) {
        increasing += 1;
        decreasing = 1;
      } else if (nums[i] < nums[i - 1]) {
        decreasing += 1;
        increasing = 1;
      } else {
        increasing = 1;
        decreasing = 1;
      }
      ans = max({ans, increasing, decreasing});
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