class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        if(nums[0]>=nums[1]+nums[2] || nums[1]>=nums[0]+nums[2] || nums[2]>=nums[1]+nums[0]) return "none";
        switch(st.size()){
            case 1: return "equilateral";
            case 2: return "isosceles";
            case 3: return "scalene";
            default: return "none";
        }
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();