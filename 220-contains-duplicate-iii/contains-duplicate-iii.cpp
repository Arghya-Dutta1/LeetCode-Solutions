class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<long> win;
        for(int i=0;i<nums.size();i++){
            auto low=win.lower_bound((long) nums[i]-valueDiff);
            if(low!=win.end() && *low<=(long) nums[i]+valueDiff)
                return true;
            win.insert(nums[i]);
            if(i>=indexDiff)
                win.erase(nums[i-indexDiff]);
        }
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();