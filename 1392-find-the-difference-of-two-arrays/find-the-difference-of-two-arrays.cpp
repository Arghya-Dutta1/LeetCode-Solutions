class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1, mp2;
        for(auto i:nums1) mp1[i]++;
        for(auto i:nums2) mp2[i]++;
        vector<vector<int>> ans(2);
        unordered_set<int> st1, st2;
        for(auto i:nums1) if(!mp2.count(i) && !st1.count(i)){
            ans[0].push_back(i);
            st1.insert(i);
        }
        for(auto i:nums2) if(!mp1.count(i) && !st2.count(i)){
            ans[1].push_back(i);
            st2.insert(i);
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