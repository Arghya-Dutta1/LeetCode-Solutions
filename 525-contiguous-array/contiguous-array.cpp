class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int csum=0, mx=0;
        mp[0]=-1;
        
        for(int i=0;i<nums.size();i++){
            csum+= nums[i]==1?1:-1;
            if(mp.count(csum))
                mx=max(mx, i-mp[csum]);
            else
                mp[csum]=i;
        }
        return mx;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();