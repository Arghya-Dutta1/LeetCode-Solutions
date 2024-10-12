class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size(), idx=0;
        vector<int> ans(n);
        for(auto p:nums){
            int min=INT_MAX;
            bool c=false;
            for(int b=0;b<=30;b++){
                int i=p & ~(1<<b);
                if(i<0) continue;
                if((i | (i+1))==p)
                    if(i<min){
                        c=true;
                        min=i;
                    }
            }
            ans[idx++]=c?min:-1;
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