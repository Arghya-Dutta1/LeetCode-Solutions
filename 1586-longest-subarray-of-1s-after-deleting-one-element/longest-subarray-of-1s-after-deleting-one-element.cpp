class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0, c0=0;
        for(auto i:nums){
            if(i==0) c0++;
            if(c0>1 && nums[l++]==0) c0--;
        }
        return nums.size()-l-1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();