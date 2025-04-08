class Solution {
public:
    bool check(vector<int>& nums, int idx){
        unordered_set<int> st;
        for(int i=idx;i<nums.size();i++)
            st.insert(nums[i]);
        return st.size()==(nums.size()-idx);
    }
    int minimumOperations(vector<int>& nums) {
        int idx=0, op=0;
        while(!check(nums, idx)){
            idx+=3;
            if(idx>=nums.size())
                idx=nums.size();
            op++;
        }
        return op;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();