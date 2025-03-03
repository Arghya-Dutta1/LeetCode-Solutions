class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        auto it=lower_bound(nums.begin(), nums.end(), target);
        return it!=nums.end()?mp[*it]:nums.size();
    }
};