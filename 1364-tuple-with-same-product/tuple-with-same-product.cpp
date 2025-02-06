class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans=0;

        for(int i=1;i<nums.size();i++)
            for(int j=0;j<i;j++)
                mp[nums[i]*nums[j]]++;
        
        for(auto [_, i]:mp)
            ans+=i*(i-1)/2;
        return ans<<3;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();