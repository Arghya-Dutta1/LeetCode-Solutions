class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        ranges::sort(nums);
        int ans=0, c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1)
                c++;
            else{
                ans=max(ans, c);
                c=1;
            }
        }
        ans=max(ans, c);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();