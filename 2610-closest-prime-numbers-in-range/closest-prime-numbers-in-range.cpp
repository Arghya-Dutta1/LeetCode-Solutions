class Solution {
public:
    void sieve(vector<bool>& v, int r){
        for(int p=2;p*p<=r;p++)
            if(v[p])
                for(int i=p*p;i<=r;i+=p)
                    v[i]=false;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> p(right+1, true);
        vector<int> ans;
        sieve(p, right);
        int pre, i, d=INT_MAX;
        for(i=right;i>=left;i--)
            if(p[i]){
                pre=i;
                break;
            }
        i--;
        for(;i>=max(left,2);i--)
            if(p[i]){
                if(d>=pre-i){
                    ans={i, pre};
                    d=pre-i;
                }
                pre=i;
            }

        if(ans.empty())
            return {-1, -1};
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();