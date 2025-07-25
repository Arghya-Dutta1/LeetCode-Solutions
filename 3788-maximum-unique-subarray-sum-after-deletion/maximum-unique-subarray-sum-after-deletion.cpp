class Solution {
public:
    bool chk(vector<int>& nums){
        for(auto i:nums)
            if(i>=0) return false;
        return true;
    }
    int maxSum(vector<int>& nums) {
        int ans=INT_MIN;
        if(chk(nums)){
            for(auto i:nums) ans=max(i, ans);
            return ans;
        }
        ans=0;
        set<int> st(nums.begin(), nums.end());
        for(auto i:st)
            if(i>0)
                ans+=i;
        return ans;
    }
};