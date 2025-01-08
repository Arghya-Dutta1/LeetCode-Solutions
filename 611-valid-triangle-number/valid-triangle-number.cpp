class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int ans=0;
        ranges::sort(nums);
        for(int i=nums.size()-1;i>=0;i--){
            int l=0, r=i-1;
            while(l<r)
                if(nums[l]+nums[r]>nums[i]){
                    ans+=r-l;
                    r--;
                }
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