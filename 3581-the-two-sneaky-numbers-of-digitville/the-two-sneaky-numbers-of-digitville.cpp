class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        for(auto [i,j]: mp)
            if(j==2)
                ans.push_back(i);
        return ans;
    }
};