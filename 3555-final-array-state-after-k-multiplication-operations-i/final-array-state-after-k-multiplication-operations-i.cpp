class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int m=0;
            for(int j=1;j<nums.size();j++)
                if(nums[j]<nums[m]) m=j;
            nums[m]*=multiplier;
        }
        return nums;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();