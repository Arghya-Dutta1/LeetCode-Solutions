class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=1; i < (1<<n) ;i++){
            int xors=0;
            for(int j=0;j<n;j++){
                if((i>>j)&1)
                    xors^=nums[j];
            }
            s+=xors;
        }
        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();