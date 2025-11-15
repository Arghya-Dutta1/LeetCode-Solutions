class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        for (int zero = 0; zero + zero * zero <= s.length(); ++zero) {
            int lastInvalidPos = -1;
            vector<int> count(2);
            for (int l = 0, r = 0; r < s.length(); ++r) {
                ++count[s[r] - '0'];
                for (; l < r; ++l)
                    if (s[l] == '0' && count[0] > zero) {
                        --count[0]; 
                        lastInvalidPos = l;
                    } else if (s[l] == '1' && count[1] - 1 >= zero * zero) {
                        --count[1]; 
                    } else {
                        break; 
                    }
                if (count[0] == zero && count[1] >= zero * zero)
                    ans += l - lastInvalidPos;
            }
        }

        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();