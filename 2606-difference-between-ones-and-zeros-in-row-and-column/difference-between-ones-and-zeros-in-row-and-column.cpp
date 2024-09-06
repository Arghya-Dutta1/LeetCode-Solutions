class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int r=grid.size(), c=grid[0].size();
        vector<int> r1(r), c1(c), r0(r), c0(c);
        for(int i=0;i<r;i++)
            for(auto g:grid[i])
                if(g==1)
                    r1[i]++;
                else
                    r0[i]++;
        for(int i=0;i<c;i++)
            for(int j=0;j<r;j++)
                if(grid[j][i]==1)
                    c1[i]++;
                else
                    c0[i]++;
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                ans[i][j]=r1[i]+c1[j]-r0[i]-c0[j];
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();