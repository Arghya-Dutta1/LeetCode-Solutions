class Solution {
public:
    long long coloredCells(int n) {
        n--;
        long long ans=1+(1LL*2*n*(n+1));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();