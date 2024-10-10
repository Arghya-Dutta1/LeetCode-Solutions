class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans=0, n=nums.size();
        stack<int> st;
        for(int i=0;i<n;i++)
            if(st.empty() || nums[i]<nums[st.top()])
                st.push(i);
        for(int i=n-1;i>ans;i--)
            while(!st.empty() && nums[i]>=nums[st.top()]){
                ans=max(ans, i-st.top());
                st.pop();
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