class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i:nums)
            if(i>0) st.insert(i);
        int n=1;
        while(true)
            if(!st.count(n++))
                return n-1;
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();