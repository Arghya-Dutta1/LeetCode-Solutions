class Solution {
public:
    int smallestNumber(int n) {
        int x=n;
        while((x&(x+1))!=0) x++;
        return x;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();