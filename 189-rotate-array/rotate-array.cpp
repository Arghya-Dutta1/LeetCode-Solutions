class Solution {
public:
    void reverse(vector<int>& nums, int l, int r) {
        while (l < r)
            swap(nums[l++], nums[r--]);
    }
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();