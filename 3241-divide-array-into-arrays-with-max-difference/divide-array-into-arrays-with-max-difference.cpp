class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        ranges::sort(nums);
        vector<vector<int>> ans;
        int idx=0;
        while(idx<nums.size()-2){
            vector<int> v={nums.begin()+idx, nums.begin()+idx+3};
            idx+=3;
            ans.push_back(v);
        }
        for(auto& i:ans) if(i[2]-i[0]>k) return {};
        return ans;
    }
};