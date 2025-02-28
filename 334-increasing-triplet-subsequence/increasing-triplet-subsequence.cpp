class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f=INT_MAX, s=INT_MAX;
        for(auto i:nums)
            if(i<=f)
                f=i;
            else if(i<=s)
                s=i;
            else
                return true;
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();