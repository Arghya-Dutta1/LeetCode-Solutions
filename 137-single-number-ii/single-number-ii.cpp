class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums)
            mp[i]++;
        int ans=-1;
        for(auto it:mp)
            if(it.second==1){
                ans=it.first;
                break;
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