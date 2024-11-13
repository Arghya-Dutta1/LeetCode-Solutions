class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        ranges::sort(nums);
        long long a1=0, a2=0;
        int i=0, j=nums.size()-1;
        while(i<j){
            while(i<j && nums[i]+nums[j]>lower-1){
                j--;
            }
            a1+=j-i;
            i++;
        }
        i=0, j=nums.size()-1;
        while(i<j){
            while(i<j && nums[i]+nums[j]>upper){
                j--;
            }
            a2+=j-i;
            i++;
        }
        return a2-a1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();