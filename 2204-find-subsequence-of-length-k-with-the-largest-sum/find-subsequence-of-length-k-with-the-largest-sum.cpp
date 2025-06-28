class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<vector<int>> v, v1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            v.push_back({nums[i], i});
        ranges::sort(v);
        int idx=nums.size()-1;
        while(k--){
            v1.push_back({v[idx][1], v[idx][0]});
            idx--;
        }
        ranges::sort(v1);
        for(auto& i:v1) ans.push_back(i[1]);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();