class Solution {
public:
    int minPairSum(vector<int>& nums) {
        ranges::sort(nums);
        int m=INT_MIN, i=0, j=nums.size()-1;
        while(i<=j)
            m=max(m, nums[i++]+nums[j--]);
        return m;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();