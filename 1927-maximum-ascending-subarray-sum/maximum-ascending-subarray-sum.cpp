class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int l=1, s=nums[0], ans=0;
        while(l<nums.size()){
            if(nums[l]>nums[l-1])
                s+=nums[l];
            else{
                ans=max(ans, s);
                s=nums[l];
            }
            l++;
        }
        ans=max(ans, s);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();