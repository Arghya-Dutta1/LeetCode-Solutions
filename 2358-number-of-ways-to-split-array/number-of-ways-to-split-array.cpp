class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        long p=0, s=accumulate(nums.begin(), nums.end(), 0L);

        for(int i=0;i<nums.size()-1;i++){
            p+=nums[i];
            s-=nums[i];
            if(p>=s) ans++;
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