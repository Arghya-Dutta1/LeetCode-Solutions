class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int> sub;
            for(int j=0;j<n;j++)
                if((i>>j)&1)
                    sub.push_back(nums[j]);
            ans.push_back(sub);
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