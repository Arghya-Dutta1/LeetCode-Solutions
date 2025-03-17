class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        for(auto [i,j]:mp)
            if(j%2!=0) return false;
        return true; 
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();