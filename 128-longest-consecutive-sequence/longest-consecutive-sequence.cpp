class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        unordered_set<int> st;
        for(auto i:nums) st.insert(i);
        int ans=0;
        for(int i=0;i<nums.size();i++)
            if(!st.count(nums[i]-1)){
                int c=1;
                while(st.count(nums[i]+c)) c++;
                ans=max(ans, c);
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