class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
            for(int j=i+1;j<nums.size();j++)
                if(nums[i]==nums[j] && i*j%k==0)
                    ans++;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();