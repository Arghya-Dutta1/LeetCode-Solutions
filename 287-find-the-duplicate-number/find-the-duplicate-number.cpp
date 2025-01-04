class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[nums[0]];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        slow = 0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();