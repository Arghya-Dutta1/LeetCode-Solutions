class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while(l<r){
            int rem=target-nums[l];
            while(nums[r]>rem) r--;
            if(nums[r]==rem)
                return {l+1, r+1};
            else
                l++;
        }
        return {-1, -1};
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();