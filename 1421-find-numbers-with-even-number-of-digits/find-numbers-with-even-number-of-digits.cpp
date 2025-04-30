class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto i:nums){
            string s=to_string(i);
            if(s.size()%2!=0) ans++;
        }
        return nums.size()-ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();