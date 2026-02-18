class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a = n ^ (n >> 2);
        return (a & (a - 1)) == 0;
    }
};