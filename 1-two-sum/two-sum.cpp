class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.count(target-nums[i])){
                a.push_back(mp[target-nums[i]]);
                a.push_back(i);
                return a;
            }
            mp[nums[i]]=i;
        }
        return a;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();