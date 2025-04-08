class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0, p=0;
        for(int i=1;(p=(int)pow(5,i))<=n;i++)
            ans+=floor(n/p);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();