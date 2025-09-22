class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        int mx=0, ans=0;
        for(auto [i,j]:mp) mx=max(mx, j);
        for(auto [i,j]:mp)
            if(j==mx)
                ans+=mx;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();