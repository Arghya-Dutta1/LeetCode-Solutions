class Solution {
public:
    int countCollisions(string directions) {
        int l = 0, r = directions.length() - 1;
        while (l < directions.length() && directions[l] == 'L')
            ++l;
        while (r >= 0 && directions[r] == 'R')
            --r;
        return count_if(directions.begin() + l, directions.begin() + r + 1, [](char c) { return c != 'S'; });
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();