class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size(), l=0, r=m*n-1;
        while(l<=r){
            int mid=(l+r)/2, i=mid/n, j=mid%n;
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();