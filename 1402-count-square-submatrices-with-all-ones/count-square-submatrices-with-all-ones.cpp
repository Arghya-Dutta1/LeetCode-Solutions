class Solution {
public:
    int m, n;
    vector<vector<int>> dp;

    int solve(vector<vector<int>>& mx, int i, int j){
        if(i>=m || j>=n) return 0;
        if(mx[i][j]==0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int side=solve(mx, i, j+1);
        int dia=solve(mx, i+1, j+1);
        int below=solve(mx, i+1, j);

        return dp[i][j]=1+min({side, dia, below});
    }

    int countSquares(vector<vector<int>>& matrix) {
        m=matrix.size();
        n=matrix[0].size();
        dp.resize(m+1, vector<int>(n+1, -1));

        int ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][j]==1)
                    ans+=solve(matrix, i, j);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();