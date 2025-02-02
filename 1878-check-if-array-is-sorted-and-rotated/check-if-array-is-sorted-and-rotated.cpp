class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i] > nums[(i + 1)%nums.size()] && ++c>1)
                return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();