class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        ranges::sort(nums);
        int ans=0, idx=0;
        for(int i=0;i<nums.size();){
            while(idx<nums.size() && nums[idx]-nums[i]<=k) idx++;
            ans++;
            i=idx;
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