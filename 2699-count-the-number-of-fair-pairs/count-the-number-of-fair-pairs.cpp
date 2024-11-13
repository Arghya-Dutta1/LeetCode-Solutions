class Solution {
public:
    long long count(vector<int>& nums, int sum){
        long long c=0;
        int i=0, j=nums.size()-1;
        while(i<j){
            while(i<j && nums[i]+nums[j]>sum)
                j--;
            c+=j-i;
            i++;
        }
        return c;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        ranges::sort(nums);
        return count(nums, upper)-count(nums, lower-1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();