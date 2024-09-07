class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size(), m=l.size();
        vector<bool> ans(m, true);
        for(int i=0;i<m;i++){
            int l1=l[i], r1=r[i];
            vector<int> nv(nums.begin()+l1, nums.begin()+r1+1);
            ranges::sort(nv);
            for(int j=1;j<nv.size()-1;j++)
                if(nv[j]-nv[j-1]!=nv[j+1]-nv[j]){
                    ans[i]=false;
                    break;
                }
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