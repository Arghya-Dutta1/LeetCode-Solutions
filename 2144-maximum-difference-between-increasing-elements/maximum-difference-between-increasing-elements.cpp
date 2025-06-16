class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1, mn=nums[0];
        for(int i=1;i<nums.size();i++){
            if(mn<nums[i])
                ans=max(ans, nums[i]-mn);
            mn=min(mn, nums[i]);
        }              
        return ans;
    }
};