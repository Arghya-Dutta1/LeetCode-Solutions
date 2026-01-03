class Solution {
public:
    int numOfWays(int n) {
        constexpr int kMod = 1'000'000'007;
        long color2 = 6, color3 = 6;
        for (int i = 1; i < n; ++i) {
            long nextColor2 = color2 * 3 + color3 * 2, nextColor3 = color2 * 2 + color3 * 2;
            color2 = nextColor2 % kMod;
            color3 = nextColor3 % kMod;
        }

        return (color2 + color3) % kMod;
    }
};