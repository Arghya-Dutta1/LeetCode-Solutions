class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int s=0, n=nums.size();
        for(auto i:nums) s+=i;
        unordered_map<int, int> f;
        for (auto i:nums) f[i]++;
        int ans=INT_MIN;
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