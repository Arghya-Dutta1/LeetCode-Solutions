class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i = 0, j = n - 1; 
        while (colors[i] == colors.back())
            ++i;
        while (colors[j] == colors.front())
            --j;
        return max(n - 1 - i, j);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();