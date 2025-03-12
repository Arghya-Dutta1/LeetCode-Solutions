class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c1=0,c2=0;
        for(auto i:nums)
            if(i>0) c1++;
            else if(i<0) c2++;
        return max(c1,c2);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();