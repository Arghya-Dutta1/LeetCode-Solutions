class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans, p(n), s(n);
        p[0]=nums[0];
        s[n-1]=nums[n-1];
        for(int i=1;i<n;i++) p[i]=p[i-1]*nums[i];
        for(int i=n-2;i>=0;i--) s[i]=s[i+1]*nums[i];
        for(int i=0;i<n;i++){
            int v=(i>0?p[i-1]:1)*(i<n-1?s[i+1]:1);
            ans.push_back(v);
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