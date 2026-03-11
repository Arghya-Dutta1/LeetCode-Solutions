class Solution {
public:
    int bitwiseComplement(long n) {
        if(n==0) return 1;
        for(long i=1;i<=n;i<<=1)
            n^=i;
        return n;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();