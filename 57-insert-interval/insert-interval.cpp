class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& v) {
        vector<vector<int>> ans;
        int i=0;
        int n=nums.size();
        while(i<n && nums[i][1]<v[0]){
            ans.push_back(nums[i]);
            i++;
        }

        int l=v[0];
        int r=v[1];
        while(i<n && r>=nums[i][0]){
            r=max(r, nums[i][1]);
            l=min(l, nums[i][0]);
            i++;
        }
        ans.push_back({l,r});

        while(i<n){
            ans.push_back(nums[i]);
            i++;
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