class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int s1=0, s2=0;
        for(auto i:nums1) s1^=i;
        for(auto i:nums2) s2^=i;
        return (nums1.size()%2 * s2)^(nums2.size()%2 * s1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();