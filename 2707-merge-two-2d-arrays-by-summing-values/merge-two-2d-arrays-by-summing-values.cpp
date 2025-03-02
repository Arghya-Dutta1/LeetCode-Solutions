class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
        for(auto i:nums1)
            mp[i[0]]=i[1];
        for(auto i:nums2)
            if(mp.count(i[0]))
                mp[i[0]]+=i[1];
            else
                mp[i[0]]=i[1];
        for(auto& [i,j]:mp)
            ans.push_back({i,j});
        ranges::sort(ans);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();