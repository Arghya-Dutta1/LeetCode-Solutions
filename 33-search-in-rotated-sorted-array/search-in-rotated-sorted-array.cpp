class Solution {
public:
    int search(vector<int>& nums, int target) {
        map<int, int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++) mp[nums[i]]=i;
        return mp.count(target)?mp[target]:-1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();