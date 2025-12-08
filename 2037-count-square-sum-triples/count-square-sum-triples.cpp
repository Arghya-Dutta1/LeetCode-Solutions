class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        unordered_set<int> squared;

        for (int i = 1; i <= n; ++i)
            squared.insert(i * i);

        for (const int a : squared)
            for (const int b : squared)
                if (squared.contains(a + b))
                    ++ans;

        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();