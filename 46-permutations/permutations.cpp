class Solution {
public:
    vector<vector<int>> ans;

    void per(vector<int>& nums, vector<int>& a, vector<bool>& b){
        if(a.size()==nums.size()){
            ans.push_back(a);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!b[i]){
                a.push_back(nums[i]);
                b[i]=true;
                per(nums, a, b);
                a.pop_back();
                b[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> a;
        vector<bool> b(nums.size(), false);
        per(nums, a, b);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();