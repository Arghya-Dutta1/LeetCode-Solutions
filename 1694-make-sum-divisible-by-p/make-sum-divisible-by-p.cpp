class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int s=0;
        for(auto i:nums) s=(s+i)%p;
        int t=s%p;
        if(t==0) return 0;

        unordered_map<int, int> mp={{0, -1}};
        int c=0, n=nums.size(), ans=n;
        for(int i=0;i<n;i++){
            c=(c+nums[i])%p;
            int r=(c-t+p)%p;
            if(mp.count(r))
                ans=min(ans, i-mp[r]);
            mp[c]=i;
        }
        return ans==n? -1:ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();