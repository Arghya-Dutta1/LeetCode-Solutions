class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int r, int c, int rs, int cs) {
        vector<vector<int>> ans;
        int dr[] = { 0, 1, 0, -1 };
        int dc[] = { 1, 0, -1, 0 };
        int di=0, i=0, b=1, f=0;
        int count=0;
        while(1){
            if(0 <= rs && rs < r && 0 <= cs && cs < c){
                ans.push_back({rs, cs});
                count++;
            }
            if(count==r*c)
                break;
            if(i==b){
                di=(di+1)%4;
                f++;
                i=0;
            }
            if(f==2){
                b++;
                f=0;
            }
            rs+=dr[di];
            cs+=dc[di];
            ++i;
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