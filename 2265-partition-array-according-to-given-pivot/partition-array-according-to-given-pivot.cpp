class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for(auto i:nums)
            if(i<pivot) ans.push_back(i);
        for(auto i:nums)
            if(i==pivot) ans.push_back(i);
        for(auto i:nums)
            if(i>pivot) ans.push_back(i);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();