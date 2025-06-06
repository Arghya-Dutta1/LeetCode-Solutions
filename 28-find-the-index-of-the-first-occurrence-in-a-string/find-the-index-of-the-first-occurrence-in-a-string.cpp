class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();