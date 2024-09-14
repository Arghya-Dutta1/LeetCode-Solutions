class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int m=*(ranges::max_element(nums));
        cout<<m;
        int c=1, ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==m && nums[i-1]==m)
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