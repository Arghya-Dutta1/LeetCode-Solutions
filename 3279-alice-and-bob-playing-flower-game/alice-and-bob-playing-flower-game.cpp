class Solution {
public:
    long long flowerGame(int n, int m) {
        const int xEven = n / 2;
        const int yEven = m / 2;
        const int xOdd = (n + 1) / 2;
        const int yOdd = (m + 1) / 2;
        return static_cast<long>(xEven) * yOdd + static_cast<long>(yEven) * xOdd;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();