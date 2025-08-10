class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if((n&(n-1))==0) return true;
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();