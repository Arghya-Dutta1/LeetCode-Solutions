class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums) mp[i]++;
        int f=INT_MIN, x=nums[0], f1=0;
        for(auto [i,j]:mp)
            if(j>f) f=j,x=i;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) f1++;
            if(f1>(i+1)/2 && (f-f1)>(nums.size()-i-1)/2)
                return i;
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