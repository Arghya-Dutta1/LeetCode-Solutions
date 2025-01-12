class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.length() % 2 == 1)
            return false;
        const bool leftToRight = check(s, locked, true);
        ranges::reverse(s);
        ranges::reverse(locked);
        const bool rightToLeft = check(s, locked, false);
        return leftToRight && rightToLeft;
    }

    bool check(const string& s, const string& locked, bool forward) {
        int changeable = 0, l = 0, r = 0;
        for (int i = 0; i < s.length(); ++i) {
            const char c = s[i], lock = locked[i];
            if (lock == '0')
                ++changeable;
            else if (c == '(')
                ++l;
            else
                ++r;
            if (forward && changeable + l - r < 0)
                return false;
            if (!forward && changeable + r - l < 0)
                return false;
        }
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();