class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        for(auto [i,j]:mp)
            if(j==n)
                return i;
        return -1;
    }
};