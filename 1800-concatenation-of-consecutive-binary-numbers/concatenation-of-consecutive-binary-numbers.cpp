class Solution {
public:
    int numberOfBits(int n) { return log2(n) + 1; }
    int concatenatedBinary(int n) {
        int kMod = 1'000'000'007;
        long ans = 0;

        for (int i = 1; i <= n; ++i)
            ans = ((ans << numberOfBits(i)) % kMod + i) % kMod;

        return ans;
    }
};