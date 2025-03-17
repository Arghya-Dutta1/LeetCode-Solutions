class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i:nums)
            if(st.count(i)) st.erase(i);
            else st.insert(i);
        return st.empty();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();