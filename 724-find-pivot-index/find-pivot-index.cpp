class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=accumulate(nums.begin(), nums.end(), 0);
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(p==s-p-nums[i]) return i;
            p+=nums[i];
        }
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();