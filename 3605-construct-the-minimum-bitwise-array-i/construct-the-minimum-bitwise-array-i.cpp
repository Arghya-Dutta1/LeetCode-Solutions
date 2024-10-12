class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(auto p:nums){
            int c=0;
            for(int i=1;i<p;i++){
                if((i | (i+1))==p){
                    ans.push_back(i);
                    c++;
                    break;
                }
            }
            if(c==0) ans.push_back(-1);
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