class Solution {
public:
    long long coloredCells(int n) {
        return 1+(1LL*2*(n-1)*(n));
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();