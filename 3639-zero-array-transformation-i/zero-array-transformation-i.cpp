class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> d(nums.size()+1, 0);
        for(auto& i:queries){
            d[i[0]]++;
            d[i[1]+1]--;
        }
        int ps=0;
        for(int j=0;j<nums.size();j++){
            ps+=d[j];
            nums[j]-=ps;
        }
        for(auto i:nums)
            if(i>0) return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();