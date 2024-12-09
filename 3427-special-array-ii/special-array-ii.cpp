class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans;
        int id=0;
        vector<int> pid={id};
        for(int i=1;i<nums.size();i++){
            if(nums[i]%2==nums[i-1]%2) id++;
            pid.push_back(id);
        }

        for(auto& i:queries) ans.push_back(pid[i[0]]==pid[i[1]]);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();