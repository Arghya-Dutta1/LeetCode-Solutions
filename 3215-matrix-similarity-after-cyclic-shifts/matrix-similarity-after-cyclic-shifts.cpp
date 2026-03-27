class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        for (const vector<int>& row : mat)
            for (int j = 0; j < n; ++j)
                if (row[j] != row[(j + k) % n])
                    return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();