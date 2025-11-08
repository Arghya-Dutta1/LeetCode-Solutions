class Solution {
public:
    int minimumOneBitOperations(int n) {
        if (n == 0)
            return 0;
        int x = 1;
        while (x * 2 <= n)
            x <<= 1;
        return minimumOneBitOperations(n ^ (x | x >> 1)) + 1 + x - 1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();