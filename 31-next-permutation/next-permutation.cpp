class Solution {
public:
    void nextPermutation(vector<int>& n) {
        next_permutation(n.begin(), n.end());
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();