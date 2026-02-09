class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size(), ans=0;
        vector<int> ps(n, 0);
        ps[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            ps[i]=ps[i+1]+nums[i];
        for(int i=0;i<n-1;i++){
            double avg=(double)ps[i+1] / (n - i - 1);
            if(nums[i]>avg)
                ans++;
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();