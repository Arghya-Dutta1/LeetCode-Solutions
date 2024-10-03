class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int c=0, s=0;
        vector<int> p(k);
        p[0]=1;
        for(int i:nums){
            s = (s+i)%k;
            if(s<0) s+=k;
            c+=p[s]++;
        }
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();