class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> ans(m * n);
        int d = 1, row = 0, col = 0;

        for (int i = 0; i < m * n; ++i) {
            ans[i] = mat[row][col];
            row -= d;
            col += d;
            if (row == m)
                row = m - 1, col += 2, d = -d;
            if (col == n)
                col = n - 1, row += 2, d = -d;
            if (row < 0)
                row = 0, d = -d;
            if (col < 0)
                col = 0, d = -d;
        }

        return ans;
    }
};