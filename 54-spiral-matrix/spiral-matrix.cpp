class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int i=0,j=0,r=matrix.size(),c=matrix[0].size(), rs=r-1, cs=c, count=0, di=0;
        int dr[] = { 0, 1, 0, -1 };
        int dc[] = { 1, 0, -1, 0 };
        while(ans.size()<r*c){
            if(i>=0 && i<r && j>=0 && j<c){
                ans.push_back(matrix[i][j]);
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