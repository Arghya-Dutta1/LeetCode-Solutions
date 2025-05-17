class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto& i:nums) i=i*i;
        ranges::sort(nums);
        return nums;
    }
};