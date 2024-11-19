class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0, s=0;
        int d=0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(++mp[nums[i]]==1) d++;
            if(i>=k){
                if(--mp[nums[i-k]]==0) --d;
                s-=nums[i-k];
            }
            if(i>=k-1 && d==k) ans=max(ans, s);
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