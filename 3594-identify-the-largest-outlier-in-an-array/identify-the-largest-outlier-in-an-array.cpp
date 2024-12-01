class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int n=nums.size(), ans=INT_MIN;
        int s=accumulate(nums.begin(), nums.end(), 0);
        unordered_map<int, int> f;
        for (auto i:nums) f[i]++;
        for(auto i:nums){
            f[i]--;
            int rs=s-i;
            if (rs%2==0 && f[rs/2]>0) ans=max(ans, i);
            f[i]++;
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