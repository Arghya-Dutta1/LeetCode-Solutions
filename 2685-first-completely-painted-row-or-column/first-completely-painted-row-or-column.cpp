class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        vector<int> rows(m), cols(n);
        vector<int> n2r(m*n+1), n2c(m*n+1);
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                n2r[mat[i][j]]=i;
                n2c[mat[i][j]]=j;
            }
        
        for(int i=0;i<arr.size();i++){
            if(++rows[n2r[arr[i]]]==n)
                return i;
            if(++cols[n2c[arr[i]]]==m)
                return i;
        }

        return -1;        
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();