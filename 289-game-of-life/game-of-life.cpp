class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=board[0].size();
        vector<vector<int>> b(m, vector<int>(n, 0));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                int c=0;
                if(i>0 && board[i-1][j]==1) c++;
                if(j>0 && board[i][j-1]==1) c++;
                if(i>0 && j>0 && board[i-1][j-1]==1) c++;
                if(i<m-1 && board[i+1][j]==1) c++;
                if(j<n-1 && board[i][j+1]==1) c++;
                if(i<m-1 && j<n-1 && board[i+1][j+1]==1) c++;
                if(i>0 && j<n-1 && board[i-1][j+1]==1) c++;
                if(i<m-1 && j>0 && board[i+1][j-1]==1) c++;

                if(board[i][j]==1){
                    if(c==2 || c==3) b[i][j]=1;
                }
                else
                    if(c==3) b[i][j]=1;
            }
        
        board=b;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();