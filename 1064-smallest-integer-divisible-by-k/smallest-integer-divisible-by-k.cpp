class Solution {
public:
    int smallestRepunitDivByK(int k) {
        unordered_set<int> seen;
        int n = 0;

        for (int length = 1; length <= k; ++length) {
            n = (n * 10 + 1) % k;
            if (n == 0)
                return length;
            if (seen.contains(n))
                return -1;
            seen.insert(n);
        }

        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();