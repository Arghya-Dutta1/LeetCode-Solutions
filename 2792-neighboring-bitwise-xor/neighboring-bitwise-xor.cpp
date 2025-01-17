class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        return accumulate(derived.begin(), derived.end(), 0, bit_xor<>()) == 0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();