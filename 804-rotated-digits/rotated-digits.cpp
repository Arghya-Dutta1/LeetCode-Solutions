class Solution {
public:
    int rotatedDigits(int n) {
        int ans = 0;
        for (int i = 1; i <= n; ++i)
            if (isGoodNumber(i))
                ++ans;
        return ans;
    }

    bool isGoodNumber(int i) {
        bool isRotated = false;
        for (const char c : to_string(i)) {
            if (c == '0' || c == '1' || c == '8')
                continue;
            if (c == '2' || c == '5' || c == '6' || c == '9')
                isRotated = true;
            else
                return false;
        }
        return isRotated;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();