class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans=0, mask=0;
        for(int l=0,r=0;r<nums.size();r++){
            while(mask&nums[r]) mask^=nums[l++];
            mask|=nums[r];
            ans=max(ans, r-l+1);
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