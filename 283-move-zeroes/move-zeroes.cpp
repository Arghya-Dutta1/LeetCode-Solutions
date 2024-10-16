class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx=0;
        for(auto i:nums)
            if(i!=0)
                nums[idx++]=i;
        while(idx<nums.size())
            nums[idx++]=0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();