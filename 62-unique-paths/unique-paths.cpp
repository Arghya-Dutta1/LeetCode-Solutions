class Solution {
public:
    int count(vector<vector<int>>& v, int i, int j, int m, int n){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        if(v[i][j]!=-1) return v[i][j];
        return v[i][j]=count(v, i+1, j, m, n)+count(v, i, j+1, m, n);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m, vector<int>(n, -1));
        return count(v, 0, 0, m, n);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();