class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int i=0,j=0,r=n,c=n, rs=r-1, cs=c, count=0, di=0, v=1;
        int dr[] = { 0, 1, 0, -1 };
        int dc[] = { 1, 0, -1, 0 };
        while(v<=n*n){
            if(i>=0 && i<r && j>=0 && j<c){
                ans[i][j]=v++;
                count++;
            }
            if(count==rs && abs(dr[di])){
                rs--;
                di=(di+1)%4;
                count=0;
            }
            if(count==cs && abs(dc[di])){
                cs--;
                di=(di+1)%4;
                count=0;
            }
            i+=dr[di];
            j+=dc[di];
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();