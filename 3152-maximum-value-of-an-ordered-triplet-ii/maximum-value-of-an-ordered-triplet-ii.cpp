class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long mx=0, diff=0, ans=0;
        for(auto i:nums){
            ans=max(ans, diff*1LL*i);
            mx=max(mx,1LL*i);
            diff=max(diff, 1LL*mx-i);
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