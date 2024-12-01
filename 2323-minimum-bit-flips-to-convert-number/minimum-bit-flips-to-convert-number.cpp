class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        for(int i=0;i<32;i++){
            bool a=(start>>i)&1;
            bool b=(goal>>i)&1;
            c+=(a!=b);
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