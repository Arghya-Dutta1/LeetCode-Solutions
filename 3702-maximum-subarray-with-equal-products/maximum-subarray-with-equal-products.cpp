class Solution {
public:
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    
    int maxLength(vector<int>& nums) {
        int n=nums.size(), ans=0;
        for(int i=0; i<n; i++){
            long long p=1, g=0, l=1;
            for(int j=i; j<n; j++){
                if (p > 1e18/nums[j]) break;
                p*=nums[j];
                g=gcd(g, (long long)nums[j]);
                l=(l / gcd(l, (long long)nums[j])) * nums[j];
                if(p == g * l)
                    ans=max(ans, j - i + 1);
            }
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