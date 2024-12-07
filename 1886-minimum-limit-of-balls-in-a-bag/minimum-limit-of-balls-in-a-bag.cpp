class Solution {
 public:
  int minimumSize(vector<int>& nums, int maxOperations) {
    int l = 1, r = ranges::max(nums);
    while (l < r) {
      int m = (l + r) / 2;
      if (numOperations(nums, m) <= maxOperations)
        r = m;
      else
        l = m + 1;
    }
    return l;
  }
  
  int numOperations(const vector<int>& nums, int m) {
    int operations = 0;
    for (int num : nums)
      operations += (num - 1) / m;
    return operations;
  }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();