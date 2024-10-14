class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ranges::sort(nums);
        int l=0, r=nums.size()-1;
        int ans=0;
        while(l<r){
            if(nums[l]+nums[r]==k){
                ans++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]>k) r--;
            else l++;
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