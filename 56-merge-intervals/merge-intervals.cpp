class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        ranges::sort(nums);
        int l=nums[0][0],r=nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]<=r){
                r=max(r, nums[i][1]);
            }
            else{
                ans.push_back({l,r});
                l=nums[i][0];
                r=nums[i][1];
            }
        }
        ans.push_back({l,r});
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();