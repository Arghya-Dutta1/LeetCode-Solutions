class Solution {
public:
    int findClosest(int x, int y, int z) {
        int d1 = abs(x - z), d2 = abs(y - z);
        if(d1 < d2) return 1;
        if(d2 < d1) return 2;
        return 0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();