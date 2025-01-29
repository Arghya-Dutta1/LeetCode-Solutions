class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        for(auto [i, j]:mp)
            if(j>n/3)
                ans.push_back(i);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();