class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        ranges::reverse(matrix);
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(matrix[i][j], matrix[j][i]);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();