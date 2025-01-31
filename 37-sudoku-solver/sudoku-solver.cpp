class Solution {
public:
    bool solve(vector<vector<char>>& board, int s) {
        if(s==81)
            return true;

        int i=s/9, j=s%9;

        if(board[i][j] != '.')
            return solve(board, s + 1);

        for (char c='1'; c<='9'; c++)
            if (isValid(board, i, j, c)) {
                board[i][j] = c;
                if (solve(board, s+1))
                    return true;
                board[i][j] = '.';
            }

        return false;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char c) {
        for (int i = 0; i < 9; ++i)
            if (board[i][col] == c || board[row][i] == c || board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
                return false;
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();